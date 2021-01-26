#include <iostream>
#include <string>
#include <cmath>

unsigned long long toDecimal(unsigned long long);

int main() {
	unsigned long long inputNum;
	unsigned long long res;

	std::cout << "Escribe un numero en binario: ";
	std::cin >> inputNum;

	res = toDecimal(inputNum);

	std::cout << "El numero binario " << inputNum << " equivale a " << res << std::endl;

	return 0;
}

unsigned long long toDecimal(unsigned long long num) {
	if (num < 2) return num;
	std::string tmpStr = std::to_string(num);
	int tmpSize = tmpStr.size();

	return toDecimal(num % static_cast<int>(pow(10, tmpSize - 1))) + (tmpStr[0] == '1' ? pow(2, tmpSize - 1) : 0);
}