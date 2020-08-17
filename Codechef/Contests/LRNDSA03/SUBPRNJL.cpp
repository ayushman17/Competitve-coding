#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define oset tree< pair<int, int>, null_type,less<pair<int, int>>,rb_tree_tag,tree_order_statistics_node_update >

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n,  temp, total = 0;
		double k;
		cin >> n >> k;
		int a[2003], mp[2003];
		oset s;
		for (int i = 1; i <= n; i++) cin >> a[i];
		for (int q = 1; q < n + 1; q++) {
			s.clear();
			memset(mp, 0, sizeof(mp));
			for (int z = q; z < n + 1; z++) {
				s.insert({a[z], mp[a[z]]++});
				int temp = ceil(k / ceil(k / (z - q + 1)));
				temp--;
				auto itr = s.find_by_order(temp);
				if (mp[mp[itr->first]]) total++;
			}
		}
		cout << total << '\n';
	}
}