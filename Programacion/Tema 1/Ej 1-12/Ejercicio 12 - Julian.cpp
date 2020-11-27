#include <iostream>

void optionOriginal();
void optionA();
void optionB();
void optionC();

int main()
{
	optionOriginal();
	optionA();
	optionB();
	optionC();
	return 0;
}

void optionOriginal()
{
	int a = 2;
	int b = ++a;
	int c = a++;

	b *= 3;
	a *= 5;

	//En este punto el resultado de a == 20, b == 9 y c == 3 
}

void optionA()
{
	int a = 2;
	int b = ++a;
	int c = a--;

	b *= 3;
	a *= 5;

	//En este punto el resultado de a == 10, b == 9 y c == 3 
}

void optionB()
{
	int a = 2;
	int b = ++a;
	int c = a++;

	b++;
	b *= 3;
	a *= 5;

	//En este punto el resultado de a == 20, b == 12 y c == 3 
}

void optionC()
{
	int a = 2;
	int b = ++a;
	int c = a++;

	a *= 5;
	b *= 3;
	c -= 2;

	//En este punto el resultado de a == 20, b == 9 y c == 1
}
