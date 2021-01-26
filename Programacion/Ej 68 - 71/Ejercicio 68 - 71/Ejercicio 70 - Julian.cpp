#include <iostream>
#include <string>
#include <algorithm>

unsigned long long mcd(unsigned long long, unsigned long long);

int main() {
	unsigned long long inputNum1;
	unsigned long long inputNum2;
	unsigned long long res;

	std::cout << "Escribe un numero entero positivo: ";
	std::cin >> inputNum1;
	std::cout << "Escribe un numero entero positivo: ";
	std::cin >> inputNum2;

	res = mcd(inputNum1, inputNum2);

	std::cout << "El maximo comun divisor de " << inputNum1 << " y " << inputNum2 << " es " << res << std::endl;
	return 0;
}

unsigned long long mcd(unsigned long long num1, unsigned long long num2) {
	unsigned long long bigger{ num1 };
	unsigned long long smaller{ num2 };

	// Si fueras Vanessa quitaria esto, pero me da pereza
	if (smaller > bigger) { std::swap(bigger, smaller); }

	if (!(num1 % num2)) return smaller;

	for (size_t i = 2; i < smaller; i++) {
		if (!(smaller % i)) {
			return mcd(bigger, smaller / i);
		}
	}
	return 1;	
}