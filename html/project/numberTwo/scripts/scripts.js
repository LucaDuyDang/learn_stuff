// Toggle between light and dark modes
const modeToggleButton = document.getElementById('mode-toggle');
const body = document.body;
const loginCard = document.querySelector('.login-card');

// Add event listener to the mode toggle button
modeToggleButton.addEventListener('click', () => {
    body.classList.toggle('dark-mode');
    loginCard.classList.toggle('dark-mode');
});

// Form submission logic (optional)
const form = document.getElementById('login-form');
form.addEventListener('submit', (event) => {
    event.preventDefault();

    const username = document.getElementById('username').value;
    const password = document.getElementById('password').value;

    if (username && password) {
        alert(`Logged in as ${username}`);
    } else {
        alert('Please fill in both fields');
    }
});
