#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a; 
	cout << "������� ������� ��������:";
	cin >> a;
	cout << "�������� ��������:" << a * 4 << "\n";
	cout << "������� ��������:" << a * a;
	return 0;
}