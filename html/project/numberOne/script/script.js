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
            statusMessage.innerText = "login vao!";
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

        if (username === "duyadmin" && password === "securepass") {
            statusMessage.innerText = "Login Successful!";
            statusMessage.style.color = "green";
        }
        // elif(username === "somehow" && password === "securepass"){
        //     statusMessage.innerText = "Login with elif";
        //     statusMessage.style.color = "red";
         else {
            statusMessage.innerText = "Invalid Credentials!";
            statusMessage.style.color = "red";
        }
    }, 1500);
});
