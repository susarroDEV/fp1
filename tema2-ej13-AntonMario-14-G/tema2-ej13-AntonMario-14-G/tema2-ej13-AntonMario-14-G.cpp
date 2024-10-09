// tema2-ej13-AntonMario-14-G.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int a, b, c, aux;
    cout << "Introduce a: ";
    cin >> a;
    cout << "Introduce b: ";
    cin >> b;
    cout << "Introduce c: ";
    cin >> c;
    if (b > c) {
        aux = b;
        b = c;
        c = aux;
    }
    if (a > b) {
        aux = a;
        a = b;
        b = aux;
    }
    if (b > c) {
        aux = b;
        b = c;
        c = aux;
    }
    cout << "Numeros ordenados de menor a mayor: " << a << ", " << b << ", " << c << endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
