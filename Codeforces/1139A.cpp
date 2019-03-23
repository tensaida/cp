#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int ans = 0;
	for (int i = 1; i <= n; i++)
		if ((s[i-1]-'0')%2==0)ans+=i;
	cout << ans << '\n';
}
