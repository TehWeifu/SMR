#include <iostream>

bool multOfTwo(long long);
bool multOfThree(long long);
bool multOfTwoAndThree(long long , bool (long long), bool (long long));


int main() {
	long long inputNum;
	std::cout << "Introduzca un numero: ";
	std::cin >> inputNum;

	if (multOfTwoAndThree(inputNum, multOfTwo, multOfThree)) std::cout << "El numero " << inputNum << " es multiplo de 2 y 3" << std::endl;
	else if (multOfTwo(inputNum)) std::cout << "El numero " << inputNum << " es multiplo de 2 pero no de 3" << std::endl;
	else if (multOfThree(inputNum)) std::cout << "El numero " << inputNum << " es multiplo de 3 pero no de 2" << std::endl;
	else std::cout << "El numero " << inputNum << " no es multiplo de 3 ni 2." << std::endl;
	return 0;
}

bool multOfTwo(long long num) {
	return (!(num % 2));
}

bool multOfThree(long long num) {
	return (!(num % 3));
}

bool multOfTwoAndThree(long long num, bool funTwo(long long), bool funThree(long long)) {
	return funTwo(num) && funThree(num);
}