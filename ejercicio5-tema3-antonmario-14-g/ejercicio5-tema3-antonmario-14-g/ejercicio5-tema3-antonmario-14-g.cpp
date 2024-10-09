// ejercicio5-tema3-antonmario-14-g.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool isalnum(char c);
bool isalpha(char c);
bool isdigit(char c);
bool islower(char c);
bool isupper(char c);

int main()
{
    char c;
    cout << "Introduzce un Caracter: ";
    cin >> c;

    cout << "Caracter " << c;
    if (isalnum(c)) {
        cout << " es alphanumerico";
        
        if (isalpha(c)) {
            cout << " y es una letra";

            if (islower(c))
                cout << " minuscula";
            else if (isupper(c))
                cout << " mayuscula";
            else
                cout << " que no sea ni minuscula ni mayuscula";
        }
        else if (isdigit(c)) {
            cout << " y es un digito";
        }
        else
            cout << " y no es ni una letra ni un digito";
    }
    else
        cout << " no es alphanumerico";

    cout << "." << endl;

    return 0;
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

bool isalpha(char c) {
    return islower(c) || isupper(c);
}

bool isalnum(char c) {
    return isalpha(c) || isdigit(c);
}
