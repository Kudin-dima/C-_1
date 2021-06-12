#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float a, b; // катеты треугольника
	cout << "¬ведите первый катет:";
	cin >> a;
	cout << "¬ведите второй катет:";
	cin >> b;
	cout << "√ипотенуза треугольника:" << sqrt(pow(a, 2) + pow(b, 2));
	return 0;
}
