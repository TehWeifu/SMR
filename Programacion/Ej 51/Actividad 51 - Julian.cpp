#include <vector>
#include <iostream>
#include <random>
#include <ctime>
#include <stdlib.h>

void initializeBoard(std::vector<std::vector<char>>&);
void printBoard(const std::vector<std::vector<char>>&);
bool inputValue(std::vector<std::vector<char>>&, const int&, const int&, const char&);
int checkGame(const std::vector<std::vector<char>>&);

int menu();

int main() {
	std::srand(time(0));
	int gameOver = 0;
	bool player1turn = true;

	int gameMode = menu();

	int inputRow, inputCol;

	std::vector<std::vector<char>> board;
	initializeBoard(board);

	while (!gameOver) {
		system("CLS");
		printBoard(board);

		if (player1turn) {
			std::cout << "\nJugador 1 ('X')" << std::endl;

			do {
				std::cout << "Introduzca la fila y columna a marcar (separadas por un espacio): ";
				std::cin >> inputRow >> inputCol;
				//if (!inputValue(board, inputRow - 1, inputCol - 1, 'X')) std::cout << "Error. Esta casilla ya esta marcada." << std::endl;
			} while (!inputValue(board, inputRow - 1, inputCol - 1, 'X'));

			player1turn = false;
		}
		else {
			if (gameMode == 1) {
				std::cout << "\nJugador 2 ('O')" << std::endl;
				do {
					std::cout << "Introduzca la fila y columna a marcar (separadas por un espacio): ";
					std::cin >> inputRow >> inputCol;
					//if (!inputValue(board, inputRow, inputCol, 'O')) std::cout << "Error. Esta casilla ya esta marcada." << std::endl;
				} while (!inputValue(board, inputRow - 1, inputCol - 1, 'O'));

				player1turn = true;
			}
			else {

				do {
					inputRow = rand() % 4;
					inputCol = rand() % 4;
				} while (!inputValue(board, inputRow, inputCol, 'O'));

				player1turn = true;
			}
		}
		gameOver = checkGame(board);
	}

	system("CLS");
	printBoard(board);

	if (gameMode == 1) {
		if (gameOver == 3) std::cout << "Empate!" << std::endl;
		else if (gameOver == 1) std::cout << "El jugador 1 gana!!" << std::endl;
		else std::cout << "El jugador 2 gana!!" << std::endl;
	}
	else {
		if (gameOver == 3) std::cout << "Empate!" << std::endl;
		else if (gameOver == 1) std::cout << "Enhorabuena. Has ganado!" << std::endl;
		else std::cout << "Has perdido. Skynet gana" << std::endl;
	}
	return 0;
}

void initializeBoard(std::vector<std::vector<char>>& board){
	board.reserve(4);

	for (int i = 0; i < 4; i++) {
		board.push_back({ ' ', ' ', ' ', ' ' });
	}
}

void printBoard(const std::vector<std::vector<char>>& board) {

	for (unsigned i = 0; i < board.size() - 1; i++) {
		for (unsigned j = 0; j < board[i].size() - 1; j++) {
			std::cout << board[i][j] << " | ";
		}
		std::cout << board[i][board[i].size() - 1] << std::endl;
		std::cout << "--------------";
		std::cout << std::endl;
	}

	for (unsigned j = 0; j < board[3].size() - 1; j++) {
		std::cout << board[3][j] << " | ";
	}
	std::cout << board[3][board[3].size() - 1] << std::endl;
}

bool inputValue(std::vector<std::vector<char>>& board, const int& i, const int& j, const char& player) {
	if (i > 3 || j > 3) return false;
	if (i < 0 || j < 0) return false;

	if (board[i][j] == ' ') {
		board[i][j] = player;
		return true;
	}
	return false;
}

int checkGame(const std::vector<std::vector<char>>& board) {
	bool full = true;

	for (unsigned i = 0; i < board.size(); i++) {
		if (board[i][0] == 'X') {
			if (board[i][1] == 'X' && board[i][2] == 'X' && board[i][3] == 'X') return 1;
		}
		if (board[i][0] == 'O') {
			if (board[i][1] == 'O' && board[i][2] == 'O' && board[i][3] == 'O') return 2;
		}
		if (board[0][i] == 'X') {
			if (board[1][i] == 'X' && board[2][i] == 'X' && board[3][i] == 'X') return 1;
		}
		if (board[0][i] == 'O') {
			if (board[1][i] == 'O' && board[2][i] == 'O' && board[3][i] == 'O') return 1;
		}
	}

	if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X' && board[3][3] == 'X') return 1;
	if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O' && board[3][3] == 'O') return 2;

	if (board[0][3] == 'X' && board[1][2] == 'X' && board[2][1] == 'X' && board[3][0] == 'X') return 1;
	if (board[0][3] == 'O' && board[1][1] == 'O' && board[2][1] == 'O' && board[3][0] == 'O') return 2;

	for (unsigned i = 0; i < board.size(); i++) {
		for (unsigned j = 0; j < board[i].size(); j++) {
			if (board[i][j] == ' ') full = false;
		}
	}

	if (full == true) return 3;
	return 0;
}


int menu() {
	int option{ -1 };
	std::cout << "Bienvenido al juego del 4 en raya!" << std::endl;
	std::cout << "Menu" << std::endl;
	std::cout << "1. PvP" << std::endl;
	std::cout << "2. vsAI" << std::endl;
	std::cout << "3. Salir" << std::endl;

	while (option < 0 || option > 2) {
		std::cout << "Elige una opcion: ";
		std::cin >> option;
		if (option < 0 || option > 2) std::cout << "Error. Ha introducido una opcion no valida." << std::endl;
	}

	return option;
}