#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	int n;
	cin >> n;
	vector<ll> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	ll curr = a[n-1];
	ll res = curr;
	for (int i = n-2; i>=0; i--) {
		if (a[i] == 0 || curr == 0)
			break;
		if (a[i] < curr) {
			res += a[i];
			curr = a[i];
		}
		else {
			res += curr-1;
			curr--;
		}
	}
	cout << res << endl;
}
