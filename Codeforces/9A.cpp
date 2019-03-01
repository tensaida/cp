#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

int main() {
	int Y, W;
	cin >> Y >> W;
	int num = 7 - max(Y,W);
	int div = gcd(num,6);
	cout << num/div << "/" << 6/div;
}
