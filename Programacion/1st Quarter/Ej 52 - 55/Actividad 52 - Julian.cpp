#include <iostream>

long double powOfThree(const long double&);

int main() {
	long double inputNum;

	std::cout << "Introduzca un numero real: ";
	std::cin >> inputNum;
	std::cout << "El numero " << inputNum << " al cubo es: " << powOfThree(inputNum) << std::endl;

	return 0;
}

long double powOfThree(const long double& num) {
	return (num * num * num);
}