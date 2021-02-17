document.addEventListener('mousemove', (event) => {
    let body = document.querySelector('.js-body');
    let screenX = body.clientWidth;

    let mouseX = event.clientX;

    let percentX = Math.floor(mouseX / screenX * 100);
    if (percentX > 100) percentX = 100;

    console.log(percentX);

    let progressBar = document.querySelector('.js-progress');
    progressBar.style.width = (percentX + '%');

    memeResult(percentX);
});

function memeResult(percent) {
    let res = document.querySelector('.js-res');

    if (percent < 25) {
        res.innerHTML = 'Clase de seguridad';
    } else if (percent < 50) {
        res.innerHTML = 'Clase de SR';
    } else if (percent < 75) {
        res.innerHTML = 'Clase de inglés';
    } else if (percent < 100) {
        res.innerHTML = 'Clase de AW';
    } else {
        res.innerHTML = 'Clase de empresas ❤️';
    }
}