#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	float a, b; // ������ ������������
	cout << "������� ������ �����:";
	cin >> a;
	cout << "������� ������ �����:";
	cin >> b;
	cout << "���������� ������������:" << sqrt(pow(a, 2) + pow(b, 2));
	return 0;
}
