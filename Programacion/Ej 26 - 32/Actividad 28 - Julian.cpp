#include <iostream>

int main() {
	unsigned short num;

	do
	{
		std::cout << "Introduzca un numero entre el 1 y el 10: ";
		std::cin >> num;

	} while (num < 1 || num > 10);

	std::cout << "\nTabla de multiplicar del " << num << std::endl;

	for (int i = 0; i < 11; i++) {
		std::cout << num << " * " << i << " = " << num * i << std::endl;
	}

	std::cout << std::endl;

	return 0;
}