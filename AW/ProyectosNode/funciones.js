const Videojuego = {
    _titulo:"minecraft",
    // getTitulo:function() {
    //     return this._titulo;
    // },
    set titulo(str) {
        if (str.length > 20) {
            console.log("Error. El titulo es muy largo");
        }
        else {
            this._titulo = str
        }
        return this;
    },
    get titulo() {
        return this._titulo;
    }
};

// function suma(num1, num2) {
//     return num1 + num2;
// }

module.exports=Videojuego;
// exports.suma=suma; 