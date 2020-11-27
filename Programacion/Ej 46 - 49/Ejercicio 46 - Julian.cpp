#include <string>
#include <iostream>

int main() {
	std::string dni;
	const std::string modDNI{ "TRWAGMYFPDXBNJZSQVHLCKE" };

	std::cout << "Introduzca los 8 numeros del DNI: ";
	std::cin >> dni;

	while (dni.size() > 8) {
		std::cout << "Error. El DNI tiene que tener como much 8 digitos." << std::endl;
		std::cout << "Introduzca los 8 numeros del DNI: ";
		std::cin >> dni;
	}

	while (std::stoi(dni) < 0 || (std::floor(std::stod(dni)) != std::ceil(std::stod(dni)))) {
		std::cout << "Error. El DNI tiene que ser un numero positivo entero." << std::endl;
		std::cout << "Introduzca los 8 numeros del DNI: ";
		std::cin >> dni;
	}

	while (dni.size() < 8) {
		dni = ('0' + dni);
	}

	std::cout << "Su DNI completo es: " << dni << modDNI[std::stoi(dni) % 23] << std::endl;
	return 0;
}