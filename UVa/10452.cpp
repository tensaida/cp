#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
void in(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	#endif
}

const string safe = "@IEHOVA#";
const int dx[] = {0,-1,0};
const int dy[] = {-1,0,1};
int m,n;
char g[8][8];
string pathto[8][8];
bool vis[8][8];

bool valid(int x, int y) {
	return x >= 0 && y >= 0 && x < m && y < n;
}

void print(int hash, int at) {
	stack<string> toprint;
	int i = 0, j = hash;
	while (!(i == m-1 && j == at)) {
		toprint.push(pathto[i][j]);
		if (pathto[i][j] == "left")
				j++;
		else if (pathto[i][j] == "right")
				j--;
		else i++;
	}
	
	while (!toprint.empty()) {
		cout << toprint.top();
		toprint.pop();
		if (toprint.size())
			cout << ' ';
	}
	cout << endl;
}

void dfs(int x, int y, int pos) {
	if (!valid(x,y) && pos >= safe.size()) return;
	if (g[x][y] != safe[pos]) return;
	if (vis[x][y]) return;
	vis[x][y] = true;
	for (int i = 0; i < 3; i++) {
		int x1 = dx[i] + x;
		int y1 = dy[i] + y;
		if (valid(x1,y1) && !vis[x1][y1]) {
			dfs(x1,y1,pos+1);
			if (i == 0)
				pathto[x1][y1] = "left";
			else if (i == 1)
				pathto[x1][y1] = "forth";
			else pathto[x1][y1] = "right";
		}
	}
}

void reset() {
	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++) 
			vis[i][j] = false;
}

int main() {
	in();
	int t;
	cin >> t;
	while (t--) {
		cin >> m >> n;
		int hash = 0, at = 0;
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++) {
				cin >> g[i][j];
				if (g[i][j] == '#') hash = j;
				if (g[i][j] == '@') at = j;
			}
		dfs(m-1,at,0);
		print(hash,at);
		reset();
	}
}
