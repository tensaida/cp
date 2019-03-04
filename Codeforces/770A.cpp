#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int c = 0;
	for (int i = 1; i <= k; i++)
		cout << (char)('a'+c++);
	int maxc = c;
	int i = k+1;
	c = 0;
	while (i <= n) {
		cout << (char)('a'+c++);
		if (c == maxc) c = 0;
		i++;
	}
}
