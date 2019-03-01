#include <iostream>
using namespace std;

int main() {
	int v[5];
	for (int i = 1; i <= 4; i++)
		cin >> v[i];
	int res = 0;
	
	string s;
	cin >> s;

	for (char e : s) {
		int i = e - '0';
		res += v[i];
	}

	cout << res;
}
