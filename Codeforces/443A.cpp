#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; getline(cin,s);
	set<char> S;
	for (int i = 0; i < s.size(); i++)
		if (isalpha(s[i])) {
			S.insert(s[i]);
		}
	cout << S.size();
}
