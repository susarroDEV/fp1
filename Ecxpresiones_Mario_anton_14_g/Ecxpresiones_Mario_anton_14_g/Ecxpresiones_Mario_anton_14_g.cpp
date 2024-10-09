// Ecxpresiones_Mario_anton_14_g.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

string printBool(bool r);

int main()
{
    int a, b, c;
    bool r1, r2, r3, r4;
    //Entrada de A, B y C
    cout << "Introduzca A: ";
    cin >> a;
    cout << "Introduzca B: ";
    cin >> b;
    cout << "Introduzca C: ";
    cin >> c;
    // Expresiones Dadas
    r1 = (a + c == 4) && (a - b == 2);
    r2 = a > 5 && b > 5 && c > 5;
    r3 = (b + c > 0) || (a == 0);
    r4 = a > 0 && b < 0 && c>0;
    //Salida de resultado de expresiones
    cout << "(A + C == 4) && (A - B == 2) equivale a " << printBool(r1) << endl;
    cout << "A > 5 && B > 5 && C > 5 equivale a " << printBool(r2) << endl;
    cout << "(B + C > 0) || (A == 0) equivale a " << printBool(r3) << endl;
    cout << "A > 0 && B < 0 && C>0 equivale a " << printBool(r4) << endl;

    return 0;
}

//Override
string printBool(bool r) {
    return r ? "true" : "false";
}

