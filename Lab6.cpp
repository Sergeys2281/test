﻿#include <iostream>
#include <iomanip>
#include <math.h>

int main()
{
    using namespace std;
    
    float x, step, Y;

    x = 3;
    step = 0.5;

    do {
        Y = cos(pow(x, 2)) + pow(sin(x), 2) + 2;
        cout << "x = " << x << " | Y = " << Y << endl;
        x = x + step;
    } while (x <= 6);
}
