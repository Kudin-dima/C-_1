#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	float a = 0;
	float b = 0;

	cout << "Введите первое число: ";
	cin >> a;
	cout << "Введите второе число: ";
	cin >> b;

	cout << a << " + " << b << " = " << a + b << endl;
	cout << a << " - " << b << " = " << a - b << endl;
	cout << a << " * " << b << " = " << a * b << endl;

	cout << "Средне арифметическое: ";
	cout << a << " + " << b << " / " << 2 << " = ";
	cout << (a + b) / 2 << endl;

	cout << endl;

	return 0;
}