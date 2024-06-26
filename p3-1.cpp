#include <iostream>
using namespace std;

int main() {
    float number;
    cin >> number;
    
    if (number > 0) {
        cout << "正數" << endl;
    } else if (number < 0) {
        cout << "負數" << endl;
    }
    else{
         cout << "0" << endl;
    }

    return 0;
}
