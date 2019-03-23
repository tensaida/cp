#include <bits/stdc++.h>
using namespace std;
const int N = 1e4+1;
int a[N];
bool r[N];
set<int> unresolved;
int n;
int main() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i+1];
	int days = 0;
	for (int i = 1; i <= n; i++) {
		unresolved.insert(a[i]);
		unresolved.erase(i);
		if (unresolved.size() == 0)
			days++;
	}
	cout << days << endl;
}
