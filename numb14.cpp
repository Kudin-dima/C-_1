#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int a, b, c, d;
	cout << "¬ведите a: ";
	cin >> a;
	cout << "¬ведите b: ";
	cin >> b;
	c = a;
	d = b;
	a = d;
	b = c;
	cout << "„исло a: " << a << "\n";
    cout << "„исло b: " << b;
	return 0;
}