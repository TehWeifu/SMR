#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

void areaCir();
void areaRec();
void areaSqu();

int main() {
	enum class menu { CIR = 1, REC, SQU}; 
	menu option;
	unsigned short input;

	std::cout << "#############################\n###    CALCULO DE AREAS   ###\n"
		<< "###    1 - AREA CIRCULO   ###\n###  2 - AREA RECTANGULO  ###\n"
		<< "###   3 - AREA TRIANGULO  ###\n#############################";
	std::cout << "\nElige una opcion: ";
	std::cin >> input;

	option = static_cast<menu>(input);

	switch (option) {
	case menu::CIR:
		areaCir();
		break;
	case menu::REC:
		areaRec();
		break;
	case menu::SQU:
		areaSqu();
		break;
	default:
		std::cout << "Ha introducido una opcion no valida." << std::endl;
		break;
	}
	return 0;
}

void areaCir() {
	long double radius;

	std::cout << "Indica el radio del circulo: ";
	std::cin >> radius;
	std::cout << "El area del circulo es: " << radius * radius * M_PI << std::endl;
	return;
}

void areaRec() {
	long double base, height;

	std::cout << "Indica la base del rectangulo: ";
	std::cin >> base;
	std::cout << "Indica la altura del rectangulo: ";
	std::cin >> height;
	std::cout << "El area del rectangulo es: " << base * height << std::endl;
	return;
}

void areaSqu() {
	long double base, height;

	std::cout << "Indica la base del triangulo: ";
	std::cin >> base;
	std::cout << "Indica la altura del triangulo: ";
	std::cin >> height;
	std::cout << "El area del triangulo es: " << (base * height) / 2 << std::endl;
	return;
}