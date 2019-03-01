#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
	string s;cin>>s;
	char l = 'a';
	int res = 0;

	for (int i = 0; i < s.size(); i++) {
		
		int t = abs(s[i] - l);
		t = min(t, 26-t);
		res += t;
		l = s[i];
	
	}

	cout << res;

}
