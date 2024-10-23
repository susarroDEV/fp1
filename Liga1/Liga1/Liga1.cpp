// Liga1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int l = 8,index=0,subindex = 0;
    int d= 0, d2 = 0;
    char p;
    vector<int> queensX(8);
    vector<int> queensY(8);
    vector<int> queensD(8);
    vector<int> queensD2(8);
    bool posible = true;
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < l; j++) {
            cin >> p;
            if (p == '*') {
                d = j - i;
                d2 = j + i;
                for (subindex = 0; subindex < index; subindex++) {
                    if (queensX[subindex] == j || queensY[subindex] == i || queensD[subindex] == d || queensD2[subindex] == d2) {
                        posible = false;
                        break;
                    }
                }
                if (!posible || index == l) {
                    posible = false;
                    for (j++; j < l; j++) {
                        cin >> p;
                    }
                    break;
                }
                queensX[index] = j;
                queensY[index] = i;
                queensD[index] = d;
                queensD2[index] = d2;
                index++;
            }
        }
        if (!posible)
            break;
    }
    while (cin) {
        cin >> p;
    }
    if (posible)
        cout << "valid" << endl;
    else
        cout << "invalid" << endl;
    return 0;
}
