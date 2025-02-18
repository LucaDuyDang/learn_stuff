        // Toggle dark and light mode
        const modeToggleButton = document.getElementById('mode-toggle');
        const appContainer = document.getElementById('app-container');
        
        modeToggleButton.addEventListener('click', function() {
            if (appContainer.classList.contains('light-mode')) {
                appContainer.classList.remove('light-mode');
                appContainer.classList.add('dark-mode');
            } else {
                appContainer.classList.remove('dark-mode');
                appContainer.classList.add('light-mode');
            }
        });
        
        // Form submission handling (optional, for real-world use)
        const form = document.getElementById('login-form');
        form.addEventListener('submit', function(event) {
            event.preventDefault();
            
            const username = document.getElementById('username').value;
            const password = document.getElementById('password').value;
        
            if (username && password) {
                alert(`Login successful with Username: ${username}`);
                // You can add further login logic here (like API calls)
            } else {
                alert('Please fill out both fields!');
            }
        });
        
        