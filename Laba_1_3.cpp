using namespace std;

#define _USE_MATH_DEFINES
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, Sr;
	cout << "Введите число a: ";
	cin >> a;
	cout << "Введите число b: ";
	cin >> b;
	Sr = (a + b) / 2;
	cout << "Среднее арифметическое равно " << Sr;
}