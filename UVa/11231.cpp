#include <bits/stdc++.h>
using namespace std;
void in(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	#endif
}
#define endl '\n'

int s(int r, int c, int col) {
	int n;
	if ((!(c&1) && col) || ((c&1) && !col)) 
		n = (c-6)/2;
	else n = (c-7)/2;
	int ans = (r-7)*n;
	return (ans<=0)?0:ans;
}

int main() {
	in();
	int r, c, col;
	while (cin >> r) {
		cin >> c; cin >> col;
		if (!(r == 0 && c == 0 && col == 0))
			cout << s(r,c,col) << endl;
	}
}