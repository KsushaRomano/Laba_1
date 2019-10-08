using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, S, R, P, Ch;
	cout << "Введите значение числа a: ";
	cin >> a;
	cout << "Введите значение числа b: ";
	cin >> b;
    S = a * a + b * b;
	R = a * a - b * b;
	P = a * a * b * b;
	Ch = (a * a) / (b * b);
	cout << "Сумма квадратов a и b равна: " << S << endl;
	cout << "Разность квадратов a и b равна: " << R << endl;
	cout << "Произведение квадратов a и b равно: " << P << endl;
	cout << "Частное квадратов a и b равно: " << Ch;
}