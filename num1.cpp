#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a = 0;
	double b = 0;
	char c = 0;
	bool d = 0;
	cout << "������� ����� �����: ";
	cin >> a;
	cout << "������� ������������ �����: ";
	cin >> b;
	cout << "������� ������: ";
	cin >> c;
	cout << "������� 0 ��� 1: ";
	cin >> d;
    cout << endl << endl;
	cout << "����� ����� :" << a << endl;
	cout << "������������ ����� :" << b << endl;
	cout << "������" << c << endl;
	cout << "������� ��� ����:" << d << endl;

	return 0;
}



	
