#include <iostream>
using namespace std;

int main(){	setlocale(LC_ALL, "rus");	float x1, x2, d;	cout << "���� ���������: 3x^2- 10x + 1 = 0" << "\n";	d = pow(-10, 2) - (4 * 3 * 1);	x1 = ((-1 * -10) + sqrt(d)) / (2 * 3);	x2 = ((-1 * -10) - sqrt(d)) / (2 * 3);	cout << "������������ �����:" << d << "\n";	cout << "������ ������ �����:" << x1 << "\n";	cout << "������ ������ �����:" << x2;	return 0;}