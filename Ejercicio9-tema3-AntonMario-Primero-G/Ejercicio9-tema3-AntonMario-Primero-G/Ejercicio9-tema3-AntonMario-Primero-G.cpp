#include <iostream>
using namespace std;

bool isupper(char c);

bool islower(char c);

bool isdigit(char c);

bool iswhitespace(char c);

int main()
{
    int countDigits = 0, countLower = 0, countUpper = 0, countWhiteSpace=0;
    char c;
    cout << "Introduce la cadena de caracteres: ";
    c = getchar();
    while(c!='\n') {
        if (isupper(c))
            countUpper++;
        else if (islower(c))
            countLower++;
        else if (isdigit(c))
            countDigits++;
        else if (iswhitespace(c))
            countWhiteSpace++;
        c = getchar();
    }
    cout << "Digitos: " << countDigits << endl << "Mayusculas: " << countUpper << endl << "Minusculas: " << countLower << endl << "Espacios en blanco: " << countWhiteSpace << endl;
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

bool iswhitespace(char c) {
    return c == ' ' || c == '\t';
}