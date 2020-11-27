#include <iostream>
#include <iomanip>

int main()
{
	float donations;

	std::cout << "Introduzca el importe toal de las donaciones, en euros: ";
	std::cin >> donations;

	std::cout << std::fixed << std::setprecision(2);
	std::cout << "\n\nRESUMEN DONACIONES" << std::endl;
	std::cout << "Centro de Salud (60%)---- " << donations * 0.60 << "$" << std::endl;
	std::cout << "Comedor para ninos (35%)- " << donations * 0.35 << "$" << std::endl;
	std::cout << "Gastos administrativos--- " << donations - ((donations * 0.60) + (donations * 0.35)) << "$" << std::endl;
	return 0;
}