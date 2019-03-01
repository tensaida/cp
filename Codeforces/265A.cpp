#include <bits/stdc++.h>
using namespace std;

int main() {
	string s, t;
	cin >> s >> t;

	int lis_pos = 0, t_pos = 0;

	while (t_pos < t.size()) {

		if (s[lis_pos] == t[t_pos]) {
			lis_pos++;
		}
		t_pos++;

	}

	cout << lis_pos + 1;

}
