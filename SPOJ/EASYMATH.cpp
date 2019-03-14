#include <bits/stdc++.h>
using namespace std;
void in(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	#endif
}
#define endl '\n'
typedef long long int ll;
ll n, m, a, d, t;
ll ar[5];

ll lcm(ll a, ll b) {return (a*b)/__gcd(a,b);}
ll f(int m) {

	ll ans = 0;
	for (int i = 1; i < (1<<5); i++) {
		ll d = 1;

		for (int j = 0; j < 5; j++)
			if (i & (1<<j)) d = lcm(d,ar[j]);

		if (1 & __builtin_popcount(i)) ans += m/d;
		else ans -= m/d;
	}

	return m - ans;
}

int main() {
	in();
	cin >> t;
	while (t--) {
		cin >> n >> m >> a >> d;
		for (int i = 0; i < 5; i++)
			ar[i] = a+i*d;
		cout << f(m) - f(n-1) << endl;
	}
}