#include <bits/stdc++.h>
using namespace std;

#define all(v)			((v).begin()), ((v).end())
#define sz(v)			((int)((v).size()))
#define clr(v, d)		memset(v, d, sizeof(v))
#define rep(i, v)		for(int i=0;i<sz(v);++i)
#define lp(i, n)		for(int i=0;i<(int)(n);++i)
#define lpi(i, j, n)	for(int i=(j);i<(int)(n);++i)
#define lpd(i, j, n)	for(int i=(j);i>=(int)(n);--i)

const int N = 100;
int vertices[N], edges[N], first[N], second[N], root[N];
int n, m;

int get(int i) {
	if (root[i] == i) return i;
	return root[i] = get(root[i]);
}

void join(int i, int j) {
	i = get(i);
	j = get(j);
	if (i == j) return;
	root[i] = j;
}

int main() {
	cin >> n >> m;
	lp(i, n) root[i] = i;
	lp(i, m) cin >> first[i] >> second[i]; 
	lp(i, m) first[i]--, second[i]--, join(first[i],second[i]);
	lp(i, n) vertices[get(i)]++;
	lp(i, m) edges[get(first[i])]++;
	int ans = 0, odd = 0;
	lp(i, n)
		if (vertices[i] == edges[i]) ans += edges[i] & 1;
		else odd += vertices[i] & 1;
	ans += odd & 1;
	cout << ans << endl;
}