#include <iostream>
#include <iomanip>

int main()
{
	const int percentIVA = 21;
	float priceNet;
	float priceGross;

	std::cout << "Introduzca el precio neto del producto, en euros: ";
	std::cin >> priceNet;

	priceGross = priceNet / (1 + percentIVA / 100.00);

	std::cout << std::fixed << std::setprecision(2);

	std::cout << "\n\nRESUMEN DEL PRODUCTO" << std::endl;
	std::cout << "Precio total/original------ " << priceGross << "$" << std::endl;
	std::cout << "I.V.A del producto (21%)--- " << priceNet - priceGross << "$" << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << "Precio neto---------------- " << priceNet << "$" << std::endl;
	return 0;
}