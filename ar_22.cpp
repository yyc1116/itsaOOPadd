#include <iostream>
#include <cstring>

using namespace std;

// Function to decrypt the string by subtracting 3 from each character's ASCII value
void decrypt(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        str[i] = str[i] - 3;
    }
}

int main() {
    char input[100]; // Assuming maximum input size of 100 characters

    cin >> input;

    // Decrypt the encrypted string
    decrypt(input);
    cout << input << endl;

    return 0;
}
