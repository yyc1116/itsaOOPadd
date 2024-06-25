#include <iostream>

using namespace std;

int main(){
    int nDollar;
    int nTicket10, nTicket5, nTicket1;
    cin >> nDollar;
    nTicket10 = nDollar / 10;
    nTicket5 = (nDollar % 10) / 5;
    nTicket1 = nDollar % 5;
    cout << "NT10=" << nTicket10 << endl;
    cout << "NT5=" << nTicket5 << endl;
    cout << "NT1=" << nTicket1 << endl;
    return 0;
}