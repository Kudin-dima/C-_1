#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a, b;
	cout << "������� a: ";
	cin >> a;
	cout << "������� b: ";
	cin >> b;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "����� a: " << a << "\n";
	cout << "����� b: " << b;
	return 0;
}