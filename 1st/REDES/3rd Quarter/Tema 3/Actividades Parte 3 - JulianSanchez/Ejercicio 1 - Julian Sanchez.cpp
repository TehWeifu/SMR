#include <iostream>

int main()
{
	double sideA, sideB, sideC;

	do
	{
		std::cout << "introduzca la longitud del lado A: ";
		std::cin >> sideA;
		std::cout << "introduzca la longitud del lado B: ";
		std::cin >> sideB;
		std::cout << "introduzca la longitud del lado C: ";
		std::cin >> sideC;

		if (sideA <= 0 || sideB <= 0 || sideC <= 0)
		{
			std::cout << "Valores introducidos no validos. Todos los lados deben ser superiores a 0" << std::endl << std::endl;
		}

	} while (sideA <= 0 || sideB <= 0 || sideC <= 0);

	if ((sideA + sideB > sideC) && (sideB + sideC > sideA) && (sideC + sideA > sideB))
	{
		std::cout << "Los lados " << sideA << ", " << sideB << " y " << sideC << " pueden formar un triangulo" << std::endl;
	}
	else
	{
		std::cout << "Los lados " << sideA << ", " << sideB << " y " << sideC << " NO pueden formar un triangulo" << std::endl;
	}
	return 0;
}