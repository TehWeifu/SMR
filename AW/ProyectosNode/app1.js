const modImportado = require("./funciones.js");
const fs = require("fs");

fs.writeFile("notas.txt", "HOLA", (err) => {
    if (err) {console.log("Ocurrio un error");}
    else {console.log("Fichero creado correctamente");}
});

fs.readFile("./notas.txt", (err, datos) => {
    if (err) {console.log("Fallo de lectura");}
    else {console.log(datos.toString());}
});

console.log("hola");

// console.log(modImportado.suma(2, 3));
// modImportado.titulo = "pokemon";
modImportado.titulo = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAa";
console.log(modImportado.titulo);