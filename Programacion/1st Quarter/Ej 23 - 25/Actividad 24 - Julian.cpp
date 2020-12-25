#include <iostream>

int main() {
	unsigned short num;

	std::cout << "introduce un numero): ";
	std::cin >> num;

	while (num >= 0 && num <= 10) std::cout << num++ << std::endl;

	return 0;
}