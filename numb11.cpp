#include <iostream>
using namespace std;

int main(){	setlocale(LC_ALL, "rus");	float x1, x2, d;	cout << "Дано выражение: 3x^2- 10x + 1 = 0" << "\n";	d = pow(-10, 2) - (4 * 3 * 1);	x1 = ((-1 * -10) + sqrt(d)) / (2 * 3);	x2 = ((-1 * -10) - sqrt(d)) / (2 * 3);	cout << "Дискриминант равен:" << d << "\n";	cout << "Первый корень равен:" << x1 << "\n";	cout << "Второй корень равен:" << x2;	return 0;}