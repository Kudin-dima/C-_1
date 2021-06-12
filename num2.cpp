#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");

	char let1 = 0, char let2 = 0, char let3 = 0, char let4 = 0, char let5 = 0;

	cout << "Введите слово из 5-ти букв: " << endl;
	cin >> let1 >> let2 >> let3 >> let4 >> let5;

	cout << "Вы ввели: ";
	cout << let1 << let2 << let3 << let4 << let5;
	cout << endl;

	return 0;
}