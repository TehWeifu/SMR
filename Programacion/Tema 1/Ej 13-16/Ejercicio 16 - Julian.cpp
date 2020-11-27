#include <iostream>
int main()
{
	int num1;
	int num2;
	std::cout << "Escriba un numero: ";
	std::cin >> num1;
	std::cout << "Escriba otro numero: ";
	std::cin >> num2;

	if ((num1 & 1) && (num2 & 1)) {
		std::cout << "Ambos numeros son impares." << std::endl;
	}
	else if (!(num1 & 1) && !(num2 & 1)) {
		std::cout << "Ambos numeros son pares." << std::endl;
	}
	else {
		std::cout << "Un numero es par y el otro impar" << std::endl;
	}
	return 0;
}