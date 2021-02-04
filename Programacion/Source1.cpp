#include <iostream>
#include <vector>
#include <algorithm>

void printGame(std::vector<int>, std::vector<int>, std::vector<int>);

int main() {
	std::vector<int> palo1;
	std::vector<int> palo2;
	std::vector<int> palo3;

	for (int i = 4; i > 0; i--) {
		palo1.push_back(i);
	}

	printGame(palo1, palo2, palo3);
	return 0;
}

void printGame(std::vector<int> palo1, std::vector<int> palo2, std::vector<int> palo3) {
	std::string outputPalo1;

	for (int i = 0; i < palo1.size(); i++) {


		for (int j = 0; j < palo1[i]; j++) {
			outputPalo1 += 219;
		}
		outputPalo1 += 219;
		for (int j = 0; j < palo1[i]; j++) {
			outputPalo1 += 219;
		}
		for (int j = 0; j < 4 - palo1[i]; j++) {
			outputPalo1 += ' ';
		}
		outputPalo1 += '\n';

		for (int j = 0; j < palo1.size(); j++) {
			outputPalo1 += ' ';
		}
		outputPalo1 += '|';
		for (int j = 0; j < palo1.size(); j++) {
			outputPalo1 += ' ';
		}
		outputPalo1 += '\n';
	}

	std::reverse(std::begin(outputPalo1), std::end(outputPalo1));
	std::cout << outputPalo1;
}
