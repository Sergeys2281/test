#include <iostream>
#include <Windows.h>
#include <math.h>

int main()
{
    using namespace std;

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int i, m, y, Z, P;

    P = 0;
    m = 2;

    cout << "Введіть y - ";
    cin >> y;

    for (i = 1; i < 6; i++)
    {
        P = P * ln(m * y);
    }

    Z = cos(P)
    cout << "Z = " << Z;
}