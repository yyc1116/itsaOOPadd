#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int excelColumnToInt(const string &column) {
    int result = 0;
    int length = column.length();

    for (int i = 0; i < length; i++) {
        result += (column[i] - 'A' + 1) * pow(26, length - i - 1);
    }

    return result;
}

int main() {
    string column;

    // Read input until EOF
    while (cin >> column) {
        int result = excelColumnToInt(column);
        cout << result << endl;
    }

    return 0;
}
