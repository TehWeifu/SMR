#include <iostream>

unsigned long long sum(unsigned long long);

int main() {
	unsigned long long inputNum;
	unsigned long long res;

	std::cout << "Escribe un numero entero positivo: ";
	std::cin >> inputNum;

	res = sum(inputNum);

	std::cout << "La suma de los numeros entre 0 y " << inputNum << " es " << res << std::endl;

	return 0;
}

unsigned long long sum(unsigned long long num) {
	if (num < 1) return 0;
	return (num + sum(num - 1));
}