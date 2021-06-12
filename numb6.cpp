#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a; 
	cout << "Введите сторону квадрата:";
	cin >> a;
	cout << "Периметр квадрата:" << a * 4 << "\n";
	cout << "Площадь квадрата:" << a * a;
	return 0;
}