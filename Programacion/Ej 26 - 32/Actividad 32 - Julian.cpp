#include <iostream>
#include <string>

unsigned long long decToBin(unsigned long long);
unsigned long long binToDec(unsigned long long);

int main() {
	char input;
	unsigned long long num;

	do {
		std::cout << "Indique si quiere introducir un numero decimal o binario (d/b): ";
		std::cin >> input;
	} while (input != 'b' && input != 'd');

	if (input == 'd') {
		std::cout << "Introduzca el numero en decimal: ";
		std::cin >> num;
		std::cout << "El numero " << num << " en decimal es " << decToBin(num) << std::endl;
	}
	else {
		std::cout << "Introduzco el numero en binario: ";
		std::cin >> num;
		std::cout << "El numero " << num << " en decimal es: " << binToDec(num) << std::endl;
	}
	return 0;
}

unsigned long long decToBin(unsigned long long number) {
	if (number == 0) return 0;
	std::string res{""};

	while (number / 2) {
		if (number % 2) res = '1' + res;
		else res = '0' + res;
		number /= 2;
	}
	res = '1' + res;
	return std::stoll(res);
}

unsigned long long binToDec(unsigned long long number) {
	unsigned long long sum{ 0 };
	std::string tmp = std::to_string(number);

	for (int i = tmp.size() - 1; i >= 0; i--) {
		if (tmp[i] == '1') sum += std::pow(2, (tmp.size() - i - 1));
	}
	return sum;
}
