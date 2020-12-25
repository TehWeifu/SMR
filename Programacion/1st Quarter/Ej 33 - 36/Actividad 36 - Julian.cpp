#include <iostream>
#include <string>
#include <cmath>

int main() {
	unsigned long long num, tmp;
	std::string res;

	std::cout << "Introduzca un entero positivo: ";
	std::cin >> num;

	tmp = num;
	res = std::to_string(num) + " = ";

	while (tmp > 1) {
		for (int i = 2; i <= tmp; i++) {
			if (!(tmp % i)) {
				res += std::to_string(i) + " * ";
				tmp /= i;
				break;
			}
		}
	}

	res = res.substr(0, res.size() - 2);

	if (num < 2) res += ( "= " + std::to_string(num));
	std::cout << res << std::endl;

	return 0;
}