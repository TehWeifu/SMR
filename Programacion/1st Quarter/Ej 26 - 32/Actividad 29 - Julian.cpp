#include <iostream>
#include <cmath>

bool isPrime(unsigned long long);

int main() {
	unsigned long long num;

	std::cout << "Introduzca un numero entero positivo: ";
	std::cin >> num;

	std::cout << "El numero " << num << (isPrime(num) ? "" : " no") << " es primo" << std::endl;
	return 0;
}

bool isPrime(unsigned long long number) {
	if (number < 2) return false;
	for (int i = 2; i <= std::sqrt(number); i++) {
		if (!(number % i)) return false;
	}
	return true;
}