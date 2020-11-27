#include <iostream>

int main() {
	unsigned short num;

	do
	{
		std::cout << "Introduzca un numero entre 1 y 20: ";
		std::cin >> num;
	} while (num < 1 || num > 20);

	for (int i = 1; i <= 20; i++) {
		if (i == num) continue;
		std::cout << i << ' ';
	}
	return 0;
}