const express = require("express");
const mongoose = require("mongoose");
const cors = require("cors");
require("dotenv").config();

const app = express();
app.use(cors());
app.use(express.json());

// Connect to MongoDB
mongoose.connect(process.env.MONGO_URI, { useNewUrlParser: true, useUnifiedTopology: true })
    .then(() => console.log("MongoDB Connected"))
    .catch(err => console.error(err));

//  Create Schema and Model
const viewSchema = new mongoose.Schema({
    date: { type: String, required: true, unique: true },
    count: { type: Number, default: 0 }  
});
const View = mongoose.model("View", viewSchema);

//  Get Views
app.get("/api/views", async (req, res) => {
    const today = new Date().toISOString().split("T")[0];

    let viewData = await View.findOne({ date: today });
    if (!viewData) {
        viewData = new View({ date: today, count: 0 });
        await viewData.save();
    }

    res.json({ date: today, views: viewData.count });
});

//  Increase Views (Max 10.000/day)
app.post("/api/views", async (req, res) => {
    const today = new Date().toISOString().split("T")[0];

    let viewData = await View.findOne({ date: today });
    if (!viewData) {
        viewData = new View({ date: today, count: 0 });
    }

    if (viewData.count < 10000) {
        viewData.count++;
        await viewData.save();
        res.json({ message: "View recorded", views: viewData.count });
    } else {
        res.status(429).json({ message: "Daily view limit (1000) reached!" });
    }
});

//  Start Server
const PORT = process.env.PORT || 5000;
app.listen(PORT, () => console.log(`Server running on port ${PORT}`));
