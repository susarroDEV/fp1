// Acpeta El Reto Entrenos.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    char ch;
    bool pN, pG;
    cin >> ch;
    while (ch!='.') {
        pN = true;
        pG = true;
        while (ch != '.') {
            if (ch == 'N')
                pN = !pN;
            else
                pG = !pG;
            cin >> ch;
        }
        if (pN && pG)
            cout << "EMPAREJADOS" << endl;
        else if (pN)
            cout << "GRIS SOLITARIO" << endl;
        else if (pG)
            cout << "NEGRO SOLITARIO" << endl;
        else
            cout << "PAREJA MIXTA" << endl;
        cin >> ch;
    }
    return 0;
}