#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int cups;
	cout << "������� ���������� �����:";
	cin >> cups;
	int spoons = cups; // �����
	int saucers = cups; // ������ 
	int amount = cups + spoons + saucers; // ����� ����������
	cout << "���������� �����:" << spoons << "\n";
	cout << "���������� ������:" << saucers << "\n";
	cout << "����� ����������:" << amount;
	return 0;
}