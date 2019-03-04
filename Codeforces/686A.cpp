#include <iostream>
using namespace std;
typedef long long int ll;
int main() {
	ll n,x;
	cin >> n >> x;
	ll left = x, dis = 0;
	while (n--) {
		char c;
		cin >> c;
		ll d;
		cin >> d;
		if (c == '-') {
			if (d > left)
				dis++;
			else left -= d;
		} else left += d;
	}
	cout << left << " " << dis;
}
