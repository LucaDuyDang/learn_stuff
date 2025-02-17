// Theme Toggle
document.getElementById("theme-btn").addEventListener("click", function() {
    document.body.classList.toggle("dark-mode");
    let mode = document.body.classList.contains("dark-mode") ? "Dark" : "Light";
    this.innerText = mode === "Dark" ? "☀️ Light Mode" : "🌙 Dark Mode";
    localStorage.setItem("theme", mode);
});

// Load theme from Local Storage
if (localStorage.getItem("theme") === "Dark") {
    document.body.classList.add("dark-mode");
    document.getElementById("theme-btn").innerText = "☀️ Light Mode";
}

// Toggle Password Visibility
function togglePassword() {
    let passwordField = document.getElementById("password");
    passwordField.type = passwordField.type === "password" ? "text" : "password";
}

// Form Validation & AJAX Submission
document.getElementById("loginForm").addEventListener("submit", function(event) {
    event.preventDefault();

    let username = document.getElementById("username");
    let password = document.getElementById("password");
    let errorMessages = document.querySelectorAll(".error-message");

    // Clear previous errors
    errorMessages.forEach(error => error.innerText = "");

    let isValid = true;

    if (username.value.trim() === "") {
        username.nextElementSibling.innerText = "Username is required";
        isValid = false;
    }

    if (password.value.trim().length < 6) {
        password.nextElementSibling.innerText = "Password must be at least 6 characters";
        isValid = false;
    }

    if (!isValid) return;

    // Simulated AJAX Request
    let statusMessage = document.getElementById("status-message");
    statusMessage.innerText = "Logging in...";
    statusMessage.style.color = "blue";

    setTimeout(() => {
        if (username.value === "admin" && password.value === "123456") {
            statusMessage.innerText = "Login Successful!";
            statusMessage.style.color = "green";
        } else {
            statusMessage.innerText = "Invalid Username or Password!";
            statusMessage.style.color = "red";
        }
    }, 1500);
});
