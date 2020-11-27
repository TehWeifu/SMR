/*
Realiza un programa en el cuál el usuario debe de acertar el número en el
que está pensando el ordenador. El funcionamiento será el siguiente:
Nada más empezar el juego aparecerá un menú con 3 opciones: Nivel fácil,
Nivel difícil, Salir.
Si el usuario ha elegido la opción salir el programa terminará.
Si ha escogido la opción fácil el usuario tendrá 10 oportunidades como
máximo de acertar el número.
Si ha escogido la opción difícil el usuario tendrá 4 oportunidades como
máximo de acertar el número.
Una vez seleccionado el nivel de dificultad el programa preguntará al usuario
¿qué número estoy pensando del 0 al 99?, Si el usuario ha acertado el número se
informara al usuario con el mensaje “Bien lo has acertado!!” y el programa
terminara.
En caso de no acertar el programa descontara un intento y mostrará por
pantalla una de las siguientes frases:
“No has acertado, te has pasado”, si el numero introducido es mayor que el
número pensado por el ordenador.
“No has acertado, no has llegado”, si el numero introducido es menor que el
número pensado por el ordenador.

Una vez mostrada por pantalla una de las frases anteriores, el programa
volverá a preguntar al usuario ¿Qué número estoy pensando? Así hasta acertar el
número o agotar los intentos, y en ese caso, se deberá indicar también al usuario
mediante la frase “Lo siento has agotado mi paciencia”.

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
			std::cout << "¿qué número estoy pensando del 0 al 99?: ";
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