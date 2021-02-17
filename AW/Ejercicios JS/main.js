let body = document.querySelector('.js-body');

function initWeb() {
    for (let i = 0; i < 2; i++) {
        let inputDiv = document.createElement('div');
        let label = document.createElement('label');
        let input = document.createElement('input');

        label.innerHTML = `Introduzca el numero ${i + 1}: `;
        input.type = 'number';

        inputDiv.appendChild(label);
        inputDiv.appendChild(input);
        body.appendChild(inputDiv);
    }

    let button = document.createElement('button');
    button.innerHTML = 'Calcular';
    button.addEventListener('click', calculate)
    body.appendChild(button);
}

function calculate() {
    let resP = document.createElement('p');
    let inputs = document.querySelectorAll('input');
    let mean = 0;

    inputs.forEach((input) => {
        mean += parseFloat(input.value);
    });

    mean /= inputs.length;

    resP.innerHTML = `La media es ${mean}`;
    body.appendChild(resP);
}

initWeb();