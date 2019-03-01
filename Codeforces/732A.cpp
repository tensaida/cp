#include <iostream>
using namespace std;

int main() {
	int k, r;
	cin >> k >> r;
	int n = 1;

	while (true) {
		if (n*k % 10 == 0) {
			cout << n;
			return 0;
		}
		if (((n*k)%10) - r == 0) {
			cout << n;
			return 0;
		}
		n++;
	}
}
