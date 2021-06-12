#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int cups;
	cout << "Введите количество чашек:";
	cin >> cups;
	int spoons = cups; // ложки
	int saucers = cups; // блюдца 
	int amount = cups + spoons + saucers; // общее количество
	cout << "Количество ложек:" << spoons << "\n";
	cout << "Количество блюдец:" << saucers << "\n";
	cout << "Всего получается:" << amount;
	return 0;
}