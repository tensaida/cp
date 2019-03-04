#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	set<int> ones;
	set<int> twos;
	set<int> threes;
	for (int i = 1; i <= n; i++) {
		int t;
		cin >> t;
		if (t == 1)
			ones.insert(i);
		else if (t == 2)
			twos.insert(i);
		else threes.insert(i);
	}
	int w = min(ones.size(),min(twos.size(),threes.size()));
	cout << w << '\n';
	while (w--) {
		cout << *prev(ones.end()) << ' ' <<  *prev(twos.end())
			<< ' ' << *prev(threes.end()) << '\n';
		ones.erase(prev(ones.end()));
		twos.erase(prev(twos.end())); 
		threes.erase(prev(threes.end()));
	}
}
