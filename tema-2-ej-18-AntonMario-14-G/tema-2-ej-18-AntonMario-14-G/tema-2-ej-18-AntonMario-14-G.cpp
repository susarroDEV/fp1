// tema-2-ej-18-AntonMario-14-G.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int n;
    do {
        cout << "Introduce numero entre 1 y 100: ";
        cin >> n;
    } while (n < 1 || n > 100);
    for (int i = 1; i < 11; i++)
    {
        cout << i << "\tx\t" << n << "\t=\t" << i * n << endl;
    }
    return 0;
}
