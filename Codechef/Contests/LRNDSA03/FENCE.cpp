#define ll long long
#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		set<pair<ll , ll>> s;
		ll n , m, k, edge = 0;
		cin >> n >> m >> k;
		pair<ll, ll> p;
		while (k--) {
			cin >> p.first >> p.second;
			s.insert(p);
		}

		for (auto x : s) {
			p.first = x.first + 1;
			p.second = x.second;
			if (s.find(p) == s.end()) edge++;
			p.first = x.first - 1;
			p.second = x.second;
			if (s.find(p) == s.end()) edge++;
			p.first = x.first;
			p.second = x.second + 1;
			if (s.find(p) == s.end()) edge++;
			p.first = x.first;
			p.second = x.second - 1;
			if (s.find(p) == s.end()) edge++;
		}

		cout << edge << endl;


	}
}