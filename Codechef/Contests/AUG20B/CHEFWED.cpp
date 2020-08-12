#include <bits/stdc++.h>
using namespace std;

void kisone(int a[], int n) {
	int ans = 1;
	int x[1500];
	memset(x, 0, sizeof(x));
	for (int j = 0; j < n; j++) {
		if (x[a[j]] >= 1) {
			ans++;
			memset(x, 0, sizeof(x));
		};
		x[a[j]]++;
	}
	cout << ans << endl;
}

int get_qaurrels(int a[], int n) {
	unordered_map<int, int> mp;
	int sum = 0;
	for (int j = 0; j < n; j++) {
		if (mp[a[j]] >= 1) {
			sum++;
		}
		mp[a[j]]++;
	}
	return sum;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int tc; cin >> tc;
	while (tc--) {
		int n, k;
		cin >> n >> k;
		int ans = 1, v[n];
		for (int i = 0; i < n; i++) cin >> v[i];
		if (k == 1) {
			kisone(v, n);
			continue;
		}
		else {
			ans = ans + get_qaurrels(v, n) + k;
		}
		cout << ans << endl;
	}
	return 0;
}