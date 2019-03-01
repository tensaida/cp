#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	string s;
	cin>>s;
	int res = 0;
	for (int i = 0; i+1 < n; i++)
		if (s[i+1]==s[i]) res++;
	cout<<res;
}
