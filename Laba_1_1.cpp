using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, S, P;
	cout << "Введите значение переменной a: ";
	cin >> a ;
	cout << "Введите значение переменной b: ";
	cin >> b ;
	S = a * b;
	P = 2 * (a + b);
	cout << "Площадь равна: " << S << endl;
	cout << "Периметр равен: " << P;
}