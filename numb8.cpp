#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int n, k, a, b;
	cout << "������� ���������� ����������: ";
	cin >> n;
	cout << "������� ���������� �����: ";
	cin >> k;
	a= k / n;
	b = k - (a * n);
	cout << "������� ���������� �������:" << a << "\n";
	cout << "������� ��������� �����:"<< b;
	return 0;
}