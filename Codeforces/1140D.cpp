#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int t = 2, res = 0;
	cin >> n;
	while (t+1<=n) {
		res += t*(t+1);
		t++;
	}
	cout << res << endl;
}