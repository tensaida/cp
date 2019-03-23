#include <bits/stdc++.h>
using namespace std;
void in() {
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
}
int main() {
	in();
	int n;
	cin >> n;
	int p, q;
	set<int> cando;
	cin >> p;
	while (p--) {
		int t;
		cin >> t;
		cando.insert(t);
	}
	cin >> q;
	while (q--) {
		int t;cin>>t;
		cando.insert(t);
	}
	if (cando.size() == n) cout << "I become the guy.";
	else cout << "Oh, my keyboard!";
	cout << "\n";
}
