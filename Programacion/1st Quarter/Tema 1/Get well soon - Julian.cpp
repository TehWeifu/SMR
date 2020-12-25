#include <vector>
#include <string>
#include <iostream>

int main()
{
	const std::vector<std::string> primero{ "", "dieci", "veint", "treinta" };
	const std::vector<std::string> ultimo{ "cero", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve", "diez", "once", "doce", "trece", "catorce", "quince" };
	std::string res{ "" };

	int num;
	std::cout << "Introduzca un numero entre el 0 y el 39: ";
	std::cin >> num;

	if (num >=0 && num <= 39) {
		std::cout << "El numero " << num << " se escribe: ";

		if (num < 16) {
			res = ultimo[num];
		}
		else {
			res = primero[num / 10];
			if (num > 30) res += " y ";
			if (num > 20 && num < 30) res += "i";
			if (num == 20) res += "e";
			if (num % 10 != 0) res += ultimo[num % 10];
		}
		std::cout << res << std::endl;
	}
	else {
		std::cout << "El numero no esta entre el rango aceptado." << std::endl;
	}
	return 0;
}