#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	char s[3];
	int n;
	cin >> n;
	n--;
	cin >> s;
	char l = s[1];
	int res = 1;
	while (n--) {
		cin >> s;
		if (s[0] == l) 
			res++;
		l = s[1];
	}
	cout << res;
}
