// theme-btn-listener 
document.getElementById("theme-btn").addEventListener("click", function() {
    document.body.classList.toggle("light-mode");
    this.innerText = document.body.classList.contains("light-mode") ?  "🌙" :"☀️";
}); // toggle light and dark mode

// off-on password
function togglePassword() {
    let passwordField = document.getElementById("password"); // no change conditions
    passwordField.type = passwordField.type === "password" ? "text" : "password";
}

// Running Test Password
function checkStrength() {
    let password = document.getElementById("password").value; // value password
    let strengthText = document.getElementById("password-strength");
    
    // (optional) check if password is empty
    if (password.length === 0) {
        strengthText.innerText = ""; 
        return;
    }

    // code react
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

// submit event
document.getElementById("loginForm").addEventListener("submit", function(event) {
    event.preventDefault();
    
    let username = document.getElementById("username").value.trim();
    let password = document.getElementById("password").value.trim();
    let statusMessage = document.getElementById("status-message");

    statusMessage.innerText = "Logging in...";
    statusMessage.style.color = "green ";


    // set timeout built-in 1500/per turn
    setTimeout(() => {
        if (username === "secAdmin" && password === "Linhchi1206!") {
            statusMessage.innerText = "logging!";
            statusMessage.style.color = "lightblue";
        }

        if (username === "KFTE072" && password === " 0354787067 "){
            statusMessage.innerText = "pos365 login";
            statusMessage.style.color = 'green';
        }

        if (username === "accountant" && password === "Admin"){
            statusMessage.innerText = "Admin Login!";
            statusMessage.style.color = 'green';
        }

        if (username === "TestLogin" && password === "Admindatabase"){
            statusMessage.innerText = "Login Success!";
            statusMessage.style.color = 'green';
        }
            
        if (username === "TestAccount" && password === "Account"){
            statusMessage.innerText = "Testingggggg !";
            statusMessage.style.color = 'green';
        }

        if (username === "devAdmin" && password === "securepass") {
            statusMessage.innerText = "Login Successful!";
            statusMessage.style.color = "green";
        }
        // condition when all fail
         else {
            statusMessage.innerText = "Invalid Credentials!";
            statusMessage.style.color = "red";
        }
    }, 1500);
});
