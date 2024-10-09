#include <iostream>
using namespace std;

int main()
{
    int n, a, b, counter = 0;
    cin >> n >>a;
    
    for(int i = 1 ; i < n; i++){
        cin >> b;
        int c = a - b;
        if (c > 1)
            counter += c - 1;
        a = b;
    }
    counter += b - 1;
    cout << counter << endl;
}
