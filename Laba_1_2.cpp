using namespace std;

#define _USE_MATH_DEFINES
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	double d, L;
	cout << "Введите значение диаметра окружности: ";
	cin >> d;
	L = d * M_PI;
	cout << "Длина окружности равна " << L;
}