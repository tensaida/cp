#include <bits/stdc++.h>
using namespace std;
const int N = 2*(int)1e5;
const int K = 100;
int a[K],n,k;

int main() {
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		long t; cin >> t;
		a[t%k]++;
	}
	int res = 0;
	for (int i = 0; i <= k/2; i++) {
		if (i == 0) {
			if (a[i] % 2 == 0) res += a[i];
			else res += a[i]-1;
		}
		else {
			int j = k - i;
			if (i == j) {
				if (a[i] % 2 == 0) res += a[i];
				else res += a[i]-1;
			}
			else res += min(a[j],a[i])*2;
		}
	}
	cout << res << endl;
}