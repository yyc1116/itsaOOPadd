#include <iostream>

using namespace std;

int main(){
    int x,i,j;
    bool isprime;
    cin >> x;
    for(i=x-1; i>=2; i--){
        isprime=true;
        for(j=2; j<i; j++){
            if(i%j==0){
                isprime=false;
                break;
            }
        }
        if(isprime){
            cout << i << endl;
            break;
        }
    }
    return 0;
}