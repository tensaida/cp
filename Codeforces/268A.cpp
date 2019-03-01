#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int res = 0;

	int h[n], g[n];
	for (int i = 0; i < n; i++) {
		cin >> h[i] >> g[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i != j) {
				if (h[i] == g[j])
					res++;
			}
		}
	}

	cout << res;
}
