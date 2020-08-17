#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while (t--) {
		int n, temp;
		cin >> n;
		int count = 0 ;
		vector<int> a, v;
		for (int i = 0; i < n; i++) {
			cin >> temp;
			a.push_back(temp);
		}
		for (int  i = 0; i < n; i++) {
			auto x = upper_bound(v.begin(), v.end(), a[i]);
			// cout << "DBG------> " << " a[i] " <<  a[i] << " x " << x - v.begin() << " count " << count << endl;
			if (x == v.end()) {
				v.push_back(a[i]);
			}
			else {
				v[x - v.begin()] = a[i];
			}
		}
		cout << v.size();
		for (auto y : v) {
			cout << " " << y;
		}
		cout << endl;
	}
}