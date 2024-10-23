// Swerc pruebas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    const int total = 100 * 100;
    int n,m=0,x1,x2,y1,y2,i1,i2,j1,j2,h,w,strong,weak,unprotected;
    cin >> n;
    while (m++<n) {
        cin >> x1 >> y1 >> x2 >> y2 >> i1 >> j1 >> i2 >> j2;
        h = y2 - j1;
        w = x2 - i1;
        if (h > 0 && w > 0)
            strong = h * w;
        else
        {
            h = j2 - y1;
            w = i2 - x1;
            if (h > 0 && w > 0)
                strong = h * w;
            else
                strong = 0;
        }
        h = y2 - y1;
        w = x2 - x1;
        weak = h * w;
        h = j2 - j1;
        w = i2 - i1;
        weak += h * w - 2 * strong;
        unprotected = total - strong - weak;
        cout << "Night " << m << ": " << strong << " " << weak << " " << unprotected << endl;
    }
    return 0;
}