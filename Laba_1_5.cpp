using namespace std;

#define _USE_MATH_DEFINES 
#include <iostream>
#include <Math.h> 

int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, S, R, P, Ch;
	cout << "Введите значение числа a: ";
	cin >> a;
	cout << "Введите значение числа b: ";
	cin >> b;
	S = abs(a) + abs(b);
	R = abs(a) - abs(b);
	P = abs(a) * abs(b);
	Ch = (abs(a)) / (abs(b));
	cout << "Сумма модулей a и b равна: " << S << endl;
	cout << "Разность модулей a и b равна: " << R << endl;
	cout << "Произведение модулей a и b равно: " << P << endl;
	cout << "Частное модулей a и b равно: " << Ch;
}