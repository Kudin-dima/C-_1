#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float x;
	cout << "¬ведите x: ";
	cin >> x;
	cout << "fx=x^2 + 3x - 100 =" << pow(x, 2) + (3 * x) - 100;
	return 0;
}


