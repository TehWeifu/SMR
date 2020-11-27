#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

int main()
{
	std::vector<long double> numbers;
	std::ostream_iterator<double> stream(std::cout, " ");

	long double tmp{ 0.0 };
	for (int i = 0; i < 4; i++) {
		std::cout << "Introduzca un numero real: ";
		std::cin >> tmp;
		numbers.push_back(tmp);
	}

	std::sort(numbers.begin(), numbers.end());

	std::cout << "El orden ascendente de los numeros es: " << std::endl;
	std::copy(numbers.begin(), numbers.end(), stream);
	std::cout << std::endl;

	return 0;
}