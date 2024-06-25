#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    //cout << "Enter the number of elements in the vector: ";
    cin >> n;

    vector<int> vec(n);
    //cout << "Enter the elements of the vector:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    for (vector<int>::reverse_iterator rit = vec.rbegin(); rit != vec.rend(); ++rit) {       
        if(rit != vec.rend()){
            cout << *rit << " ";
        }
        else if(rit == vec.rend()){
            cout << *rit;
        }
    }
    cout << endl;

    return 0;
}
