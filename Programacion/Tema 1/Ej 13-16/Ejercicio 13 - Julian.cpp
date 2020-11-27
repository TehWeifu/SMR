#include <iostream>
int main()
{
	int num;
	std::cout << "Escriba un numero: ";
	std::cin >> num;
	std::cout << (num & 1 ? "El numero es impar." : "El numero es par.");
	return 0;
}