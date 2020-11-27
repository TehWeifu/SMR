#include <iostream>

using namespace std;
int main()
{
    int n1 = 10; // el operador == es la operacion logica de igualdad no la de asignacion
    int n2 = 80;
    float n3;
    n3 = 3.5;
    float suma = n1 + n2;
    float resultado = suma / n3; // falta el punto y coma
        cout << "El resultado de sumar 10 + 80 y dividirlo entre 3,5 es: " << resultado;
        // resultado es el nombre de una variable. No se puede incluir en el literal de un string
    return 0;
}
// Si definieramos la variablle resultado como int se perderia el valor decimal
// por lo que la variable resultado tendra el valor de 25