#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a, b;
	cout << "¬ведите a: ";
	cin >> a;
	cout << "¬ведите b: ";
	cin >> b;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "„исло a: " << a << "\n";
	cout << "„исло b: " << b;
	return 0;
}