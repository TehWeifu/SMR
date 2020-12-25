#include <iostream>
#include <string>
#include <random>
#include <ctime>
#include <stdlib.h>

int main() {
	const short numOptions{ 10 };
	const short ROWS{ 6 };
	const short COL{ 8 };

	const std::string options[numOptions]{ "arroz", "pollo", "conejo", "judia", "garrofo", "romero", "azafran",
											"tomate", "aceite", "agua" };
	char hangedMan[ROWS][COL]{ {' ', '_', '_', '_', '_', '_', ' ', ' '},
								{'|', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
								{'|', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
								{'|', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
								{'|', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
								{'|', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

	std::srand(time(0));
	std::string choosedWord = options[std::rand() % 10];

	std::string tmp;
	for (int i = 0; i < choosedWord.size(); i++) {
		tmp.push_back('_');
	}

	char userGuess;
	bool guessTurn = false;
	bool gameOver = false;
	int countFails = 0;

	while (!gameOver && (countFails < 7)) {
		guessTurn = false;

		for (int i = 0; i < ROWS; i++) {
			for (int j = 0; j < COL; j++) {
				std::cout << hangedMan[i][j];
			}
			std::cout << std::endl;
		}

		std::cout << "\nLa palabra es: ";
		for (int i = 0; i < tmp.size(); i++) {
			std::cout << tmp[i] << " ";
		}

		std::cout << "\nTe quedan " << 7 - countFails << " vidas.";
		std::cout << "\nIntroduzca una letra: ";
		std::cin >> userGuess;

		for (int i = 0; i < choosedWord.size(); i++) {
			if (std::tolower(userGuess) == choosedWord[i]) {
				tmp[i] = userGuess;
				guessTurn = true;
			}
		}

		if (!guessTurn) {
			countFails++;
		}

		switch (countFails) {
		case 1:
			hangedMan[1][6] = '|';
			break;
		case 2:
			hangedMan[2][6] = 'O';
			break;
		case 3:
			hangedMan[3][6] = '|';
			break;
		case 4:
			hangedMan[3][5] = '/';
			break;
		case 5:
			hangedMan[3][7] = '\\';
			break;
		case 6:
			hangedMan[4][5] = '/';
			break;
		case 7:
			hangedMan[4][7] = '\\';
			break;
		default:
			break;
		}

		if (choosedWord == tmp) gameOver = true;
		system("CLS");
	}

		for (int i = 0; i < ROWS; i++) {
			for (int j = 0; j < COL; j++) {
				std::cout << hangedMan[i][j];
			}
			std::cout << std::endl;
		}

	if (gameOver) {
		std::cout << "\nEnhorabuena! Has ganado." << "\nLa palabra era: " << choosedWord << std::endl;
	}
	else {
		std::cout << "\nR.I.P Has perdido." << "\nLa palabra era: " << choosedWord << std::endl;
	}

	return 0;
}