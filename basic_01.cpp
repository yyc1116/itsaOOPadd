#include <iostream>
#include <string>

using namespace std;
char display[5][10][6] = {
    {"*****", "    *", "*****", "*****", "*   *", "*****", "*****", "*****", "*****", "*****"},
    {"*   *", "    *", "    *", "    *", "*   *", "*    ", "*    ", "    *", "*   *", "*   *"},
    {"*   *", "    *", "*****", "*****", "*****", "*****", "*****", "    *", "*****", "*****"},
    {"*   *", "    *", "*    ", "    *", "    *", "    *", "*   *", "    *", "*   *", "    *"},
    {"*****", "    *", "*****", "*****", "    *", "*****", "*****", "    *", "*****", "    *"},
};

int main()
{
    char s[10];
    cin >> s;
    for (int j = 0; j < 5; j++){
        for (int i = 0; i < 4; i++){
            int d = s[i] - '0';
            if (i) cout << " ";
            cout << display[j][d];
        }
       cout << endl;
    }
    return 0;
}