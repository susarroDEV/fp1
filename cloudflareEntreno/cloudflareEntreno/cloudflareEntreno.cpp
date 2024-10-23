// cloudflareEntreno.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int maxBid,price,offer;
    char coma;
    string winner="",bidder;
    vector<string> bids;
    cin >> price;
    maxBid = price-1;
    while (cin) {
        cin >> coma;
        cin >> bidder;
        bidder = bidder.substr(0, bidder.size() - 1);
        cin >> offer;
        if (offer > maxBid) {
            winner = bidder;
            price = maxBid + 1;
            maxBid = offer;
        }
        else if (offer = maxBid) {
            price = maxBid;
        }
        else if(offer>=price){
            price = offer + 1;
        }
    }
    cout << winner << "," << price;
    return 0;
}