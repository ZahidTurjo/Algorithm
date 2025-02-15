let character = document.getElementById("character");
let block = document.getElementById("block");
let scoreSpan = document.getElementById("scoreSpan");
let counter = 0;

// Jump function
document.addEventListener("keydown", function(event) {
    if (event.code === "Space") {
        jump();
    }
});

function jump() {
    if (!character.classList.contains("jump")) {
        character.classList.add("jump");
    }
    setTimeout(function() {
        character.classList.remove("jump");
    }, 500);
}

// Collision Detection
let checkDead = setInterval(function() {
    let characterTop = parseInt(window.getComputedStyle(character).getPropertyValue("bottom"));
    let blockLeft = parseInt(window.getComputedStyle(block).getPropertyValue("right"));

    if (blockLeft > 350 && blockLeft < 390 && characterTop <= 10) {
        block.style.animation = "none";
        alert("Game Over! Score: " + Math.floor(counter / 100));
        counter = 0;
        block.style.animation = "moveBlock 1.5s infinite linear";
    } else {
        counter++;
        scoreSpan.innerHTML = Math.floor(counter / 100);
    }
}, 10);
