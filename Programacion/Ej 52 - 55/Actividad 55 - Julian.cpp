#include <iostream>
#include <string>

long double sum(long double, long double);
long double sub(long double, long double);
long double mul(long double, long double);
long double div(long double, long double);
long double mod(long double, long double);
long double power(long double, long double);

int main() {
	bool exit;
	long double num1, num2;
	char op;

	do {
		std::cout << "Introduzca una expresion: ";
		std::cin >> num1 >> op >> num2;

		std::cout << "El resultado es: ";

		switch (op) {
		case '+':
			std::cout << sum(num1, num2);
			break;
		case '-':
			std::cout << sub(num1, num2);
			break;
		case '*':
			std::cout << mul(num1, num2);
			break;
		case '/':
			std::cout << div(num1, num2);
			break;
		case '%':
			std::cout << mod(num1, num2);
			break;
		case '^':
			std::cout << pow(num1, num2);
			break;
		default:
			std::cout << "Has introducido una expresion no valida.";
			break;
		}

		std::cout << "\nPulse 1 para realizar orta operacion o 0 para salir: ";
		std::cin >> exit;
	} while (exit);

	return 0;
}

long double sum(long double num1, long double num2) {
	return num1 + num2;
}

long double sub(long double num1, long double num2) {
	return num1 - num2;
}

long double mul(long double num1, long double num2) {
	return num1 * num2;
}

long double div(long double num1, long double num2) {
	return num1 / num2;
}

long double mod(long double num1, long double num2) {
	//Esto esta tirando a regular pero no se puede utilizar el operador % con decimales
	//Tambien podria usar la funcion de cmath pero le quita la gracia al ejercicio
	return static_cast<long long>(num1) % static_cast<long long>(num2);
}

long double power(long double num1, long double num2) {
	long double sum{ 1 };
	for (int i = 0; i < num2; i++) {
		mul(sum, num1);
	}
	return sum;
}