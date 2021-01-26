#include <iostream>
#include <string>
#include <algorithm>

unsigned long long fibonnaci(unsigned long long);

int main() {
	unsigned long long inputNum;
	unsigned long long res;

	std::cout << "Escribe un numero entero positivo: ";
	std::cin >> inputNum;

	res = fibonnaci(inputNum - 1);

	std::cout << "El " << inputNum << " numero fibonacci es " << res << std::endl;
	return 0;
}

unsigned long long fibonnaci(unsigned long long num) {
	if (num < 1) return 0;
	if (num < 2) return 1;

	return (fibonnaci(num - 1) + fibonnaci(num - 2));
}