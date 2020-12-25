#include <iostream>

int main() {
	const short SIZE = 4;
	long double vec[4];
	long double sum{ 0.0 };

	for (int i = 0; i < SIZE; i++) {
		std::cout << "Introduzca un numero real para la variable " << i + 1 << ": ";
		std::cin >> vec[i];
		sum += vec[i];
	}

	std::cout << "\nLos numeros introducidos son: ";
	for (int i = 0; i < SIZE; i++) {
		std::cout << vec[i] << " ";
	}

	std::cout << "\nLa media aritmetica de los datos introducidos es " << sum / SIZE << std::endl;

	return 0;
}