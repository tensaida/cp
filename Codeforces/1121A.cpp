#include <bits/stdc++.h>
using namespace std;
#define sz 101
int p[sz], s[sz], m[sz];

int main() {
	int n,m1,k;
	cin >> n >>m1 >> k;
	for(int i=1;i<=n;i++)cin>>p[i];
	for(int i=1;i<=n;i++)cin>>s[i];
	for(int i=1;i<=n;i++)
		m[s[i]]=max(m[s[i]],p[i]);
	int res=0;
	while(k--){
		int t;cin>>t;
		if(p[t]!=m[s[t]])res++;
	}
	cout<<res;
}
