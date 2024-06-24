#include <iostream>

using namespace std;

int f91(int n){
    if(n<=100)
        return f91(f91(n+11));
    else if(n>=101)
        return n-10;
}

int main(){
    int k,n;
    cin >> k;
    while((k--)>0){
        cin >> n;
        cout << f91(n) << endl;
    }

    return 0;
}