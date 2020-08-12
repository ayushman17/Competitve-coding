#include<bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int tc; cin >> tc;
	while (tc--) {
		map <char, int> mp;
		string s, ans1, ans2, p;
		cin >> s >> p;
		for (auto x : s) mp[x]++;
		for (auto w : p) {
			mp[w]--;
			if (mp[w] == 0) mp.erase(w);
		}
		for (auto q : mp) ans1 += string(q.second, q.first);
		ans2 = ans1;
		int itr = upper_bound(ans1.begin(), ans1.end(), p[0]) - ans1.begin() ;
		ans1.insert( itr, p);
		itr = lower_bound(ans2.begin(), ans2.end(), p[0]) - ans2.begin() ;
		ans2.insert( itr, p);
		if (ans1 > ans2) cout << ans2 << endl;
		else cout << ans1 << endl;
	}
	return 0;
}