#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>
int main() {
	int n; cin >> n;
	int m; cin >> m;
	int k; cin >> k;
	vector<int> powers(n+1);
	vector<int> index(n+1);
	for (int i = 1; i <= n; i++)
		cin >> powers[i];
	for (int i = 1; i <= n; i++)
		cin >> index[i];
	set<int> chosen;
	for (int i = 1; i <= k; i++)
	{
		int t; cin>>t;
		chosen.insert(t);
	}
	for (int i = 1; i <= m; i++) {
		int maxp = 0, maxid = 0;
		for (int j = 1; j <= n; j++)
			if (index[j] == i)
			{
				if (maxp < powers[j])
				{
					maxp = powers[j];
					maxid = j;
				}
			}
		chosen.erase(maxid);	
	}
	cout << chosen.size();
}
