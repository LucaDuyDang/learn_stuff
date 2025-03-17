const express = require("express");
const mongoose = require("mongoose");
const bcrypt = require("bcryptjs");
const jwt = require("jsonwebtoken");
const session = require("express-session");
const passport = require("passport");
const GoogleStrategy = require("passport-google-oauth20").Strategy;
const GitHubStrategy = require("passport-github2").Strategy;
require("dotenv").config();

const app = express();
app.use(express.json());
app.use(session({ secret: "secret-key", resave: false, saveUninitialized: true }));
app.use(passport.initialize());
app.use(passport.session());

mongoose.connect("mongodb://localhost:27017/userDB", { useNewUrlParser: true, useUnifiedTopology: true });

const UserSchema = new mongoose.Schema({
  username: String,
  password: String,
  theme: { type: String, default: "light" },
  provider: String,
  providerId: String
});
const User = mongoose.model("User", UserSchema);

// Register
app.post("/register", async (req, res) => {
  const { username, password } = req.body;
  const hashedPassword = await bcrypt.hash(password, 10);
  const newUser = new User({ username, password: hashedPassword });
  await newUser.save();
  res.json({ message: "User registered successfully!" });
});

// Login
app.post("/login", async (req, res) => {
  const { username, password } = req.body;
  const user = await User.findOne({ username });
  if (!user || !(await bcrypt.compare(password, user.password))) {
    return res.status(401).json({ message: "Invalid credentials!" });
  }
  const token = jwt.sign({ id: user._id }, "secret-key", { expiresIn: "1h" });
  res.json({ message: "Login successful!", token, theme: user.theme });
});

// Change Theme
app.post("/theme", async (req, res) => {
  const { userId, theme } = req.body;
  await User.findByIdAndUpdate(userId, { theme });
  res.json({ message: "Theme updated!" });
});

// Google Login
passport.use(
  new GoogleStrategy(
    {
      clientID: process.env.GOOGLE_CLIENT_ID,
      clientSecret: process.env.GOOGLE_CLIENT_SECRET,
      callbackURL: "/auth/google/callback"
    },
    async (accessToken, refreshToken, profile, done) => {
      let user = await User.findOne({ providerId: profile.id });
      if (!user) {
        user = new User({ username: profile.displayName, provider: "google", providerId: profile.id });
        await user.save();
      }
      return done(null, user);
    }
  )
);
app.get("/auth/google", passport.authenticate("google", { scope: ["profile"] }));
app.get("/auth/google/callback", passport.authenticate("google", { failureRedirect: "/login" }), (req, res) => {
  res.redirect("/");
});

// GitHub Login
passport.use(
  new GitHubStrategy(
    {
      clientID: process.env.GITHUB_CLIENT_ID,
      clientSecret: process.env.GITHUB_CLIENT_SECRET,
      callbackURL: "/auth/github/callback"
    },
    async (accessToken, refreshToken, profile, done) => {
      let user = await User.findOne({ providerId: profile.id });
      if (!user) {
        user = new User({ username: profile.username, provider: "github", providerId: profile.id });
        await user.save();
      }
      return done(null, user);
    }
  )
);
app.get("/auth/github", passport.authenticate("github", { scope: ["user:email"] }));
app.get("/auth/github/callback", passport.authenticate("github", { failureRedirect: "/login" }), (req, res) => {
  res.redirect("/");
});

app.listen(5000, () => console.log("Server running on port 5000"));
