#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string a, b, c, aux;
    //Entrada de Datos
    cout << "Introduce a: ";
    cin >> a;
    cout << "Introduce b: ";
    cin >> b;
    cout << "Introduce c: ";
    cin >> c;
    //Comparo y hago swap condicionado
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