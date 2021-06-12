#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int n, k, a, b;
	cout << "¬ведите количество школьников: ";
	cin >> n;
	cout << "¬ведите количество €блок: ";
	cin >> k;
	a= k / n;
	b = k - (a * n);
	cout << "—колько достанетс€ каждому:" << a << "\n";
	cout << "—колько останетс€ €блок:"<< b;
	return 0;
}