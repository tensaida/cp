#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int res = 0;
	int avail = 0;

	while (n--) {
		int t;
		cin >> t;
		if (t > 0)
			avail+=t;
		else {
			if (avail == 0)
				res++;
			else avail--;
		}
	}

	cout << res;
}
