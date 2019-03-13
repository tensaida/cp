#include <bits/stdc++.h>
using namespace std;

const int N = 600;
int a[N], i;
string x, y;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	while (cin >> x) {
		cin >> y;
		memset(a, 0, sizeof(a));
		reverse(x.begin(), x.end());
		reverse(y.begin(), y.end());

		for (i = 0; i < x.size(); i++)
			for (int j = 0; j < y.size(); j++)
				a[i+j] += (x[i]-'0')*(y[j]-'0');

		for (i = 0; i < N-1; i++) {
			a[i+1] += a[i] / 10;
			a[i] %= 10;
		}

		while (i > 0 && a[i] == 0) i--;
		for (; i >= 0; i--) cout << a[i];
		cout << '\n';	
	}
}