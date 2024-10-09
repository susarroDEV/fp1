// Ejercicio8-tema3-AntonMario-14-G.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool isupper(char c);

bool islower(char c);

bool isdigit(char c);

int main()
{
    int countDigits = 0, countLower = 0, countUpper = 0;
    char c;
    do {
        cout << "Introduce un caracter que quieres contar en resumen o * para salir: ";
        cin >> c;
        if (isupper(c))
            countUpper++;
        else if (islower(c))
            countLower++;
        else if (isdigit(c))
            countDigits++;
    } while (c != '*');


}

bool isupper(char c) {
    return c >= 'A' && c <= 'Z';
}

bool islower(char c) {
    return c >= 'a' && c <= 'z';
}

bool isdigit(char c) {
    return c >= '0' && c <= '9';
}