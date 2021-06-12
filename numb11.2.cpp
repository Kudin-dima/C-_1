#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, x;
    setlocale(0, "");

    cout << "¬ведите a: ";
    cin >> a;
    cout << "¬ведите b:";
    cin >> b;
    cout << "¬ведите с:";
    cin >> c;

    if ((pow(b, 2) - 4 * a * c) >= 0)
    {
        x = (-1 * b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
        cout << "ѕервый корень равен " << x << "\n";
        x = (-1 * b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
        cout << "¬торой корень равен " << x;
    }

    else
    {
        cout << "ƒискриминант меньше 0";
    }

    return 0;
}
