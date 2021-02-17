let box = document.querySelector('.js-box')
const colors = ['black', 'green', 'red', 'yellow', 'blue'];
let currentColor = 2;

document.addEventListener('keydown', (event) => {
    let keyValue = event.keyCode;
    console.log(keyValue);

    // ArrowUp code === 38
    if (keyValue === 38) {
        grow();
    }

    // ArrowDown code === 40
    if (keyValue === 40) {
        shrink()
    }

    if ((keyValue === 37 || keyValue === 39) && Math.random() < 0.2) {
        easterEgg();
    } else {
        // ArrowLeft code === 37
        if (keyValue === 37) {
            colorDown();
        }

        // ArrowRight code === 39
        if (keyValue === 39) {
            colorUp();
        }
    }
});

function grow() {
    let width = box.clientWidth;
    let height = box.clientHeight;

    box.style.width = (width + 10) + 'px';
    box.style.height = (height + 10) + 'px';
}

function shrink() {
    let width = box.clientWidth;
    let height = box.clientHeight;

    box.style.width = (width - 10) + 'px';
    box.style.height = (height - 10) + 'px';
}

function colorUp() {
    currentColor++;
    if (currentColor === colors.length) currentColor = 0;

    box.style.background = colors[currentColor];
}

function colorDown() {
    currentColor--;
    if (currentColor === -1) currentColor = colors.length - 1;

    box.style.background = colors[currentColor];
}

//Un saludo Raul
function easterEgg() {
    let url = 'https://i.stack.imgur.com/VTARy.png'
    console.log('Estoy en EE')
    box.style.background = `url(${url}) no-repeat `;
    box.style.backgroundSize = 'contain';
}
