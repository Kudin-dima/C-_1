#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int a, b, c, d;
	cout << "������� a: ";
	cin >> a;
	cout << "������� b: ";
	cin >> b;
	c = a;
	d = b;
	a = d;
	b = c;
	cout << "����� a: " << a << "\n";
    cout << "����� b: " << b;
	return 0;
}