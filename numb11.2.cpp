#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, x;
    setlocale(0, "");

    cout << "������� a: ";
    cin >> a;
    cout << "������� b:";
    cin >> b;
    cout << "������� �:";
    cin >> c;

    if ((pow(b, 2) - 4 * a * c) >= 0)
    {
        x = (-1 * b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
        cout << "������ ������ ����� " << x << "\n";
        x = (-1 * b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
        cout << "������ ������ ����� " << x;
    }

    else
    {
        cout << "������������ ������ 0";
    }

    return 0;
}
