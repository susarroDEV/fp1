#include <iostream>
using namespace std;


int main()
{
    int n, aux, aux2, sum=0;

    cin >> n;

    while (n--) {
        cin >> aux;
        sum += aux * 6;
        cin >> aux;
        sum += aux * 8;
        cin >> aux;
        sum += aux * 10;
        cin >> aux >> aux2;
        sum += aux * aux2 * 2;
        cout << sum << '\n';
        sum = 0;
    }

    

    return 0;
}