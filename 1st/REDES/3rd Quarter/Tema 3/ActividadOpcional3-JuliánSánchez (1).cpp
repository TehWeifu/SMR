/*
Realiza un programa en el cu�l el usuario debe de acertar el n�mero en el
que est� pensando el ordenador. El funcionamiento ser� el siguiente:
Nada m�s empezar el juego aparecer� un men� con 3 opciones: Nivel f�cil,
Nivel dif�cil, Salir.
Si el usuario ha elegido la opci�n salir el programa terminar�.
Si ha escogido la opci�n f�cil el usuario tendr� 10 oportunidades como
m�ximo de acertar el n�mero.
Si ha escogido la opci�n dif�cil el usuario tendr� 4 oportunidades como
m�ximo de acertar el n�mero.
Una vez seleccionado el nivel de dificultad el programa preguntar� al usuario
�qu� n�mero estoy pensando del 0 al 99?, Si el usuario ha acertado el n�mero se
informara al usuario con el mensaje �Bien lo has acertado!!� y el programa
terminara.
En caso de no acertar el programa descontara un intento y mostrar� por
pantalla una de las siguientes frases:
�No has acertado, te has pasado�, si el numero introducido es mayor que el
n�mero pensado por el ordenador.
�No has acertado, no has llegado�, si el numero introducido es menor que el
n�mero pensado por el ordenador.

Una vez mostrada por pantalla una de las frases anteriores, el programa
volver� a preguntar al usuario �Qu� n�mero estoy pensando? As� hasta acertar el
n�mero o agotar los intentos, y en ese caso, se deber� indicar tambi�n al usuario
mediante la frase �Lo siento has agotado mi paciencia�.

*/

#include <iostream>
#include <stdlib.h>
#include <time.h>


int main()
{
	int v1 ;
	srand(time(NULL)); // genera una semilla para obtener la aletoriedad. hay que hacerlo si o si
	v1 = rand() % 100; // el valor de la variable v1 esta dentro del rango de 0 a 99

	int opcion;
	int intentosMaximos;
	int intento = -1;

	std::cout << "Bienvenido al programa de adivinar un numero entre 0 y 99" << std::endl;
	std::cout << "	1)Nivel Facil" << std::endl;
	std::cout << "	2)Nivel Dificil" << std::endl;
	std::cout << "	3)Salir" << std::endl;
	std::cout << "Eliga una opcion: ";
	std::cin >> opcion;

	if (opcion == 1 || opcion == 2)
	{
		if (opcion == 1)
		{
			intentosMaximos = 10;
		}
		else
		{
			intentosMaximos = 4;
		}

		for (intentosMaximos; (intentosMaximos > 0 && intento != v1) ; intentosMaximos--)
		{
			std::cout << "�qu� n�mero estoy pensando del 0 al 99?: ";
			std::cin >> intento;

			if (intento >=0 && intento < v1)
			{
				std::cout << "No has acertado, no has llegado" << std::endl;
			}
			else if (intento > v1 && intento <= 99)
			{
				std::cout << "No has acertado, te has pasado" << std::endl;
			}
			else if (intento == v1)
			{
				std::cout << "Bien lo has acertado!!" << std::endl;
			}
			else
			{
				std::cout << "Has introducido un valor no valido" << std::endl;
			}
		}
		if (intentosMaximos == 0 && intento != v1)
		{
			std::cout << "Lo siento has agotado mi paciencia";
		}
	}
	else
	{
		std::cout << "Has elegido la opcion 3) Salir" << std::endl;
	}
	return 0;
}

	//switch (opcion)
	//{
	//case 1:
	//	// aqui habra codigo
	//	break;
	//case 2:
	//	// aqui habra codigo
	//	break;
	//case 3:
	//	std::cout << "Has elegido la opcion 3) Salir" << std::endl;
	//	break;

	//default:
	//	std::cout << "Has elegido una opcion no valida." << std::endl;
	//	break;