#include <iostream>

int main()
{
	float celcius = -300.00;
	float kelvin = 0;

	while (celcius < -274.15)
	{
		std::cout << "Introduzca una temperatura en grados centigrados y pulse enter: ";
		std::cin >> celcius;

		if (celcius < -274.15)
		{
			std::cout << "Error. Ha introducido una temperatura demasiado baja." << std::endl;
			std::cout << "No se pueden alcanzar temperaturas mas bajas a - 274.15 grados centigrados" << std::endl << std::endl;
		}
	}

	kelvin = celcius + 274.15;

	std::cout << celcius << " grados Celcius equivalen a " << kelvin << " grados Kelvin" << std::endl;
	return 0;
}