document.getElementById("theme-btn").addEventListener("click", function() {
    document.body.classList.toggle("light-mode");
    this.innerText = document.body.classList.contains("light-mode") ?  "🌙" :"☀️";
});

function togglePassword() {
    let passwordField = document.getElementById("password");
    passwordField.type = passwordField.type === "password" ? "text" : "password";
}

function checkStrength() {
    let password = document.getElementById("password").value;
    let strengthText = document.getElementById("password-strength");
    
    if (password.length === 0) {
        strengthText.innerText = "";
        return;
    }

    if (password.length < 6) {
        strengthText.innerText = "Weak Password";
        strengthText.style.color = "red";
    } else if (password.length < 10) {
        strengthText.innerText = "Medium Password";
        strengthText.style.color = "orange";
    } else {
        strengthText.innerText = "Strong Password";
        strengthText.style.color = "green";
    }
}

document.getElementById("loginForm").addEventListener("submit", function(event) {
    event.preventDefault();
    
    let username = document.getElementById("username").value.trim();
    let password = document.getElementById("password").value.trim();
    let statusMessage = document.getElementById("status-message");

    statusMessage.innerText = "Logging in...";
    statusMessage.style.color = "green ";

    setTimeout(() => {
        if (username === "chiadmin" && password === "Linhchi1206!") {
            statusMessage.innerText = "Em Be login vao roi!";
            statusMessage.style.color = "lightblue";
        }
        else if (username === "duyadmin" && password === "securepass") {
            statusMessage.innerText = "Login Successful!";
            statusMessage.style.color = "green";
        } else {
            statusMessage.innerText = "Invalid Credentials!";
            statusMessage.style.color = "red";
        }
    }, 1500);
});
