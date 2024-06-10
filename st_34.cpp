#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string str;
    char a_word;
    int letter[26] = {0};   //'a'->0

    cin >> str;
    for (size_t i = 0; i < str.length(); i++) {
        a_word = str[i];
        if (isalpha(a_word)) {
            a_word = tolower(a_word);
            letter[a_word - 'a']++;
        }
    }
    for (int i = 0; i < 26; i++) {
        cout << letter[i] << endl;
    }
    return 0;
}
