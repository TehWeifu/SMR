#include <iostream>
int main()
{
	int num1;
	int num2;
	std::cout << "Escriba un numero: ";
	std::cin >> num1;

	if (num1 == 0) {
		std::cout << "El producto de cualquier numero es 0." << std::endl;
	}
	else {
		std::cout << "Escriba otro numero: ";
		std::cin >> num2;
		std::cout << "El producto de " << num1 << " y " << num2 << " es: " << num1 * num2 << std::endl;
	}
	return 0;
}