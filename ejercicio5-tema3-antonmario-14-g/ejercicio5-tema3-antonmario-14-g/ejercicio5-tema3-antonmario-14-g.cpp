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

}

bool isupper(char c) {
    return c >= 'A' && c <= 'Z';
}

bool islower(char c) {
    return c >= 'a' && c <= 'z';
}

bool isdigit(char c) {
    return c >= '0' && c <= '1';
}

bool isalpha(char c) {

}
