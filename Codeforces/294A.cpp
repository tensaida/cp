#include <iostream>
using namespace std;
int a[101];

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	int m;
	cin >> m;

	while (m--) {
		int x;
		int y;
		cin >> x >> y;
		int t = a[x];
		a[x]=0;
		if (x-1 >= 0)
			a[x-1] += y-1;
		if (x+1 <= n)
			a[x+1] += t-y;
	}

	for (int i = 1; i <= n; i++)
		cout << a[i] << "\n";
}
