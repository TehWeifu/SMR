#include <iostream>
//#include <string> Podria haber usado la fucion size() pero soy buena gente

int main() {
	unsigned long long num;
	unsigned short count{ 0 };

	std::cout << "Introduzca un numero entero: ";
	std::cin >> num;

	std::cout << "El numero " << num << " tiene ";
	
	if (num == 0) count++;
	while (num) {
		count++;
		num /= 10;
	}

	std::cout << count << " digitos." << std::endl;
	return 0;
}