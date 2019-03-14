#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
void in(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif
}
typedef long long ll;

ll n, m, t, a, d;
ll ar[5];

ll lcm(ll a, ll b) {
	return (a*b) / (__gcd(a,b));
}

ll f(int ind, int lvl, int m, ll d) {

	if (ind == 5) {

		if (lvl & 1) return -m/d;
		return m/d;

	}

	ll res = f(ind+1, lvl+1, m, lcm(d, ar[ind]));
	res += f(ind+1, lvl, m, d);

	return res;
}

int main() {
	in();
	cin >> t;

	while (t--) {

		cin >> n >> m >> a >> d;
		
		for (int i = 0; i <= 4; i++)
			ar[i] = a + i*d;

		cout << f(0,0,m,1) - f(0,0,n-1,1) << endl;

	}
}