#include <bits/stdc++.h>
using namespace std;
#define int long long int
const int MOD = 1e9 + 7;
const int N = 1e5 + 1;
vector<int> G[N];
int sz, n, k;
bool v[N];

void dfs(int i) {
	if (v[i]) return;
	sz++;
	v[i] = true;
	for (int c : G[i])
		dfs(c);
}

int pow(int n) {
	int res = 1;
	for (int i = 1; i <= k; i++) {
		res = (res * n) % MOD;
	}
	return res;
}

int32_t main() {
    cin >> n >> k;
	for (int i = 0; i < n-1; i++) {
		int u,v,x;
		cin >> u >> v >> x;
		if (!x)
			G[u].push_back(v),G[v].push_back(u);
	}
	int minus = 0;
	for (int i = 1; i <= n; i++) {
		sz = 0;
		dfs(i);
		minus += pow(sz);
		minus %= MOD;
	}
	int res = pow(n) - minus;
	if (res >= 0)
		cout << res << endl;
	else // WA without this
		cout << res + MOD << endl;
}
