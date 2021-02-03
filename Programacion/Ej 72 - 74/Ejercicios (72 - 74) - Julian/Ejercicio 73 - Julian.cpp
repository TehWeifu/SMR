#include <iostream>
#include <cmath>

bool isPrime(unsigned long long*);

int main() {
	unsigned long long inputNum;

	std::cout << "Introduzca un numero entero positivo: ";
	std::cin >> inputNum;

	std::cout << "El numero " << inputNum << (isPrime(&inputNum) ? "" : " NO") << " es primo." << std::endl;
	std::cout << "Su direccion de memoria es: " << &inputNum << std::endl;
	return 0;
}

bool isPrime(unsigned long long* pToNum) {
	if (*pToNum < 2) return false;

	for (size_t i = 2; i <= std::sqrt(*pToNum); i++) {
		if (!(*pToNum % i)) return false;
	}

	return true;
}