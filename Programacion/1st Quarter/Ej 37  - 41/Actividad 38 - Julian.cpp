#include <iostream>

int main() {
	const short SIZE = 5;
	long double vec[SIZE];

	for (int i = 0; i < SIZE; i++) {
		std::cout << "Introduzca un numero real para la variable " << i + 1 << ": ";
		std::cin >> vec[i];
	}

	std::cout << "Los numeros introducidos en orden inverso son: ";
	for (int i = SIZE - 1; i >= 0; i--) {
		std::cout << vec[i] << " ";
	}

	std::cout << std::endl;
	return 0;
}