#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a = 0;
	double b = 0;
	char c = 0;
	bool d = 0;
	cout << "Введите целое число: ";
	cin >> a;
	cout << "Введите вещественное число: ";
	cin >> b;
	cout << "Введите символ: ";
	cin >> c;
	cout << "Введите 0 или 1: ";
	cin >> d;
    cout << endl << endl;
	cout << "Целое число :" << a << endl;
	cout << "Вещественное число :" << b << endl;
	cout << "Символ" << c << endl;
	cout << "Единица или ноль:" << d << endl;

	return 0;
}



	
