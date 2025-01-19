const canvas = document.getElementById("snowfall");
const ctx = canvas.getContext("2d");

// Set Canvas Dimensions
canvas.width = window.innerWidth;
canvas.height = window.innerHeight;

const snowflakes = [];
const numFlakes = 150; // Adjust for more or fewer snowflakes

// Snowflake Class
class Snowflake {
  constructor() {
    this.reset();
  }

  reset() {
    this.x = Math.random() * canvas.width;
    this.y = Math.random() * canvas.height - canvas.height;
    this.size = Math.random() * 4 + 1;
    this.speed = Math.random() * 3 + 1;
    this.opacity = Math.random() * 0.8 + 0.2;
  }

  update() {
    this.y += this.speed;
    if (this.y > canvas.height) {
      this.reset();
    }
  }

  draw() {
    ctx.beginPath();
    ctx.arc(this.x, this.y, this.size, 0, Math.PI * 2);
    ctx.fillStyle = `rgba(255, 255, 255, ${this.opacity})`;
    ctx.fill();
  }
}

// Initialize Snowflakes
function createSnowflakes() {
  for (let i = 0; i < numFlakes; i++) {
    snowflakes.push(new Snowflake());
  }
}

// Render Snowfall
function renderSnowfall() {
  ctx.clearRect(0, 0, canvas.width, canvas.height);

  for (let flake of snowflakes) {
    flake.update();
    flake.draw();
  }

  requestAnimationFrame(renderSnowfall);
}

// Handle Resize
window.addEventListener("resize", () => {
  canvas.width = window.innerWidth;
  canvas.height = window.innerHeight;
  snowflakes.length = 0; // Clear existing snowflakes
  createSnowflakes();
});

// Start Snowfall Animation
createSnowflakes();
renderSnowfall();
