#include <iostream>

int main() {
	const short SIZE = 50;
	short vecOfNums[SIZE];
	short numInput{ 0 };

	for (int i = 0; i < SIZE; i++) {
		vecOfNums[i] = i + 1;
	}

	do {
		std::cout << "Introduzca un numero entre 1 y 50: ";
		std::cin >> numInput;
	} while (numInput < 1 || numInput > 50);

	std::cout << "Numeros menores al introducido (hasta 0): " << std::endl;
	for (int i = numInput - 2; i >= 0; i--) {
		std::cout << vecOfNums[i] << std::endl;
	}

	return 0;
}