#include <bits/stdc++.h>
using namespace std;

long long int n, m, a, d, t;

long long int lcm(long long int a, long long int b) {
	return (a*b)/__gcd(a,b);
}

long long int s(long long int m) {
	long long int sum = 0;
	for (int i = 0; i <= 4; i++)
		sum += m/(a+i*d);
	for (int i = 0; i <= 4; i++)
	for (int j = i+1; j <= 4; j++)
	sum -= m/lcm((a+i*d),(a+j*d));

	for (int i = 0; i <= 4; i++)
	for (int j = i+1; j <= 4; j++)
		for (int k = j+1; k <= 4; k++)
	sum += m/lcm((a+i*d),lcm((a+j*d),(a+k*d)));

	for (int i = 0; i <= 4; i++)
	for (int j = i+1; j <= 4; j++)
		for (int k = j+1; k <= 4; k++)
			for (int l = k+1; l <= 4; l++)
	sum -= m/lcm(lcm((a+i*d),(a+l*d)),lcm((a+j*d),(a+k*d)));

	for (int i = 0; i <= 4; i++)
	for (int j = i+1; j <= 4; j++)
		for (int k = j+1; k <= 4; k++)
			for (int l = k+1; l <= 4; l++)
				for (int m1 = l+1; m1 <= 4; m1++)
	sum += m/lcm(lcm((a+i*d),(a+l*d)),lcm(lcm((a+j*d),(a+k*d)),(a+m1*d)));
	return (m-sum);
}

// int b(int n, int m) {
// 	int res = 0;
// 	for (int i = n; i <= m; i++)
// 		if (i % a != 0 && i % (a+d) != 0 && i % (a+2*d) != 0 && i % (a+3*d) != 0 && i % (a+4*d) != 0)
// 			res++;
// 	return res;	
// }

int main() {
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	cin >> t;
	while (t--) {

		cin >> n >> m >> a >> d;
		
		// cout << m - n + 1 - (s(m) - s(n-1)) << '\n';
		cout << s(m) - s(n-1) << "\n";	
	}
}