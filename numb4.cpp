#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a, b;

	cout << "������� ������������ ������:";
	cin >> a;
	cout << "������� ���������� ������: ";
	cin >> b;
	cout << "� ������ �������� ����� " << (a + b - 1) / a << " ������";
	return 0;
}