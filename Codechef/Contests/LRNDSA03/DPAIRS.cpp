#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {

	ll i, n, m;
	cin >> n >> m;
	vector<pair<ll, ll>> v1(n), v2(m);
	for (i = 0; i < n; i++)
	{
		cin >> v1[i].first;
		v1[i].second = i;
	}
	for (i = 0; i < m; i++)
	{
		cin >> v2[i].first;
		v2[i].second = i;
	}
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());

	for (i = 0; i < m; i++)
	{
		cout << v1[0].second << " " << v2[i].second << "\n";
	}
	for (i = 1; i < n; i++)
	{
		cout << v1[i].second << " " << v2[m - 1].second << "\n";
	}
}
