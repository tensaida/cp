#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	string s;
	cin >> t;
	while (t--) {
		cin >> n >> s;
		int pos1 = -1;
		for (int i = n-1; i >= 0; i--)
			if (s[i] == '<') {
				pos1 = i;
				break;
			}
		int pos2 = n;	
		for (int i = 0; i < n; i++)
			if (s[i] == '>') {
				pos2 = i;
				break;
			}
		cout << min(n-pos1-1, pos2) << endl;		
	}
}