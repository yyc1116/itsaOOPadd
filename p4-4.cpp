#include <iostream>

using namespace std;

int main() {
	long long  N = 0, tmp = 0, total = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> tmp;
		total += tmp;
		cout << total << " ";
	}
    cout << endl;
	return 0;
}