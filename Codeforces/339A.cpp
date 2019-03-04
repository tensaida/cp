#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v;
	string s;
	cin >> s;
	for (char e : s)
		if (isdigit(e))
			v.push_back(e-'0');
	sort(v.begin(),v.end());
	string res = "";
	for (int i : v)
		res += to_string(i) + "+";
	cout << res.substr(0,res.size()-1);
}
