#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

std::vector<std::vector<int>> initializeGame();
int insertDisk(std::vector<std::vector<int>>&, const int&, const int&);
void printGame(const std::vector<int>&, const std::vector<int>&, const std::vector<int>&);
std::string rodToStr(const std::vector<int>&);

const unsigned short NUMOFDISKS{ 4 };
const unsigned short NUMOFRODS{ 4 };


int main() {
	std::vector<std::vector<int>> rods;
	int fromRod{ 0 };
	int	toRod{ 0 };
	unsigned long long moves{ 0 };

	rods = initializeGame();


	while (rods[2].size() < NUMOFDISKS) {
		system("CLS");
		printGame(rods[0], rods[1], rods[2]);

		do {
			std::cout << "Escriba el numero del palo del origen y el destino del disco separados por un espacio: ";
			std::cin >> fromRod >> toRod;

		} while (!insertDisk(rods, fromRod - 1, toRod - 1));
		moves++;
	}

	system("CLS");
	printGame(rods[0], rods[1], rods[2]);
	std::cout << "Enhorabuena, lo has logrado!!!!" << std::endl;
	if (moves == 15) {
		std::cout << "WOW. Ademas lo has hecho perfecto, en 15 movimientos solo!!! Debe ser Vanessa la que esta jugando." << std::endl;
	}
	else {
		std::cout << "Has necesitado " << moves << " movimientos. Se puede lograr en tan solo 15 movimientos. Intenta mejorarlo Noelia." << std::endl;
	}

	return 0;
}

std::vector<std::vector<int>> initializeGame() {
	std::vector<std::vector<int>> res;

	res.push_back({ 4, 3, 2, 1 });
	res.push_back({  });
	res.push_back({  });

	return res;
}

int insertDisk(std::vector<std::vector<int>>& rods, const int& from, const int& to) {
	if (from < 0 || to < 0 || from > 2 || to > 2) {
		std::cout << "Error. Has introducido un palo no valido." << std::endl;
		return 0;
	}

	if (from == to) {
		std::cout << "Error. El palo de origen y destino no pueden ser el mismo." << std::endl;
		return 0;
	}

	if (rods[from].empty()) {
		std::cout << "Error. No hay ningun disco en ese palo." << std::endl;
		return 0;
	}

	if (!(rods[to].empty()) && rods[from].back() > rods[to].back()) {
		std::cout << "Error. Un disco grande no puede estar sobre uno menor." << std::endl;
		return 0;
	}

	rods[to].push_back(rods[from].back());
	rods[from].pop_back();

	return 1;
}


void printGame(const std::vector<int>& palo1, const std::vector<int>& palo2, const std::vector<int>& palo3) {
	std::string outputPalo1{ rodToStr(palo1) };
	std::string outputPalo2{ rodToStr(palo2) };
	std::string outputPalo3{ rodToStr(palo3) };

	std::cout << "\n\t\t     TORRES DE HANOI\n\n";

	for (int i = 0; i < 8; i++) {
		std::cout << "     ";

		for (int j = 0; j < 9; j++) {
			std::cout << outputPalo1[9 * i + j];
		}
		std::cout << "          ";

		for (int j = 0; j < 9; j++) {
			std::cout << outputPalo2[9 * i + j];
		}
		std::cout << "          ";

		for (int j = 0; j < 9; j++) {
			std::cout << outputPalo3[9 * i + j];
		}

		std::cout << std::endl;
	}
	std::cout << "       Palo 1             Palo 2             Palo 3";
	std::cout << "\n\n";
	return;
}

std::string rodToStr(const std::vector<int>& rod) {
	std::string res;
	char diskChar{ static_cast<char>(219) };

	for (size_t i = 0; i < NUMOFDISKS; i++) {

		if (i < rod.size()) {
			for (int j = 0; j < 4 - rod[i]; j++) {
				res += ' ';
			}

			for (int j = 0; j < rod[i]; j++) {
				res += diskChar;
			}
			res += diskChar;
			for (int j = 0; j < rod[i]; j++) {
				res += diskChar;
			}

			for (int j = 0; j < 4 - rod[i]; j++) {
				res += ' ';
			}

			res += "    |    ";
		}
		else {
			res += "    |        |    ";
		}
	}

	std::reverse(std::begin(res), std::end(res));
	return res;
}
