// tema-2-ej-17-AntonMario-14-G.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    double input = 1, output = 0;
    char inputUnit;
    string outputUnit;
    cout << "Introduce valor seguido por un espacio y unidad inicial: ";
    cin >> input;
    cin >> inputUnit;
    while (input) {
        switch (inputUnit) {
            case 'p':
                output = 2.54 * input;
                outputUnit = "cm";
                break;
            case 'm':
                output = 1609.34 * input;
                outputUnit = "metros";
                break;
            case 'f':
                output = (input - 32) / 1.8;
                outputUnit = "c";
                break;
            case 'g':
                output = 3.78541 * input;
                outputUnit = "l";
                break;
            case 'o':
                output = 28.3495 * input;
                outputUnit = "gr";
                break;
            case 'l':
                output = 0.4536 * input;
                outputUnit = "kg";
                break;
        }
        cout << input << " " << inputUnit << " = " << output << " " << outputUnit << endl;
        cout << "Introduce valor seguido por un espacio y unidad inicial: ";
        cin >> input;
        cin >> inputUnit;
    }
    return 0;
}