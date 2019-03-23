#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define ll long long int
#define pii pair<int,int>
#define endl '\n'
#define vi vector<int>
int main() {
	IOS
	int n, k;
	cin >> n >> k;
	vector<pii> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i].second >> a[i].first;
	sort(a.rbegin(),a.rend());
	priority_queue<int, vi, greater<int>> pq;
	ll length_sum = 0, best = 0;
	for (int i = 0; i < n; i++) {
		length_sum += a[i].second;
		pq.push(a[i].second);
		if (pq.size() > k) {
			length_sum -= pq.top();
			pq.pop();
		}
		best = max(best, a[i].first * length_sum);
	}
	cout << best << endl;
}