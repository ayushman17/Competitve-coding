#include<bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while (tc--) {

		int t, temp;
		cin >> t;
		int g[t], f[t];
		for (int i = 0; i < t; i++) {
			cin >> temp;
			g[i] = temp * 20;
		}
		for (int a = 0; a < t; a++) {
			cin >> temp;
			f[a] = temp * 10;
		}
		int ans = 0;
		for (int l = 0; l < t; l++) {
			ans = max(ans, g[l] - f[l]);
		}
		cout << ans << endl;
	}
}
