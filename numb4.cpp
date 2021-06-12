#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a, b;

	cout << "Введите количествово клеток:";
	cin >> a;
	cout << "Введите количество зайцев: ";
	cin >> b;
	cout << "В клетке максимум будет " << (a + b - 1) / a << " зайцев";
	return 0;
}