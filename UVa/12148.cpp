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

int n;
int M[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool f(int ld, int lm, int ly, int cd, int cm, int cy) {

	if (--cd == 0) {

		if (--cm == 0) {
			cm = 12;
			--cy;
		}

		cd = M[cm - 1];
		bool isleap = ((cy % 4 == 0 && cy % 100 != 0) || cy % 400 == 0);
		if (cm == 2 && isleap) cd = 29; 
	}

	return cd == ld && cm == lm && cy == ly;
}

int main() {
	in();
	cin >> n;
	while (n != 0) {
		int curr = 0, last = 0, cnt = 0, res = 0;
		int ld = 0, lm = 0, ly = 0, cd, cm, cy;
		while (n--) {
			cin >> cd >> cm >> cy >> curr;
			if (f(ld,lm,ly,cd,cm,cy)) {cnt++; res+=curr-last;}
			last = curr;
			ld=cd; lm=cm; ly=cy;
		}
		ld=0; lm=0; ly=0; 
		cout << cnt << " " << res << endl;
		cin >> n;
	}
}