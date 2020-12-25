#include <iostream>

int main() {
	unsigned short count;

	do
	{
		std::cout << "Introduzca un numero entre 1 y 20: ";
		std::cin >> count;

	} while (count < 1 || count > 20);

	for (int i = 0; i <= 20; i++) {
		if (i == count) break;
		std::cout << 'A';
	}

	std::cout << std::endl;

	return 0;
}