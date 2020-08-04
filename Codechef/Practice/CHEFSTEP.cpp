#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		int n;
		ll k, temp;
		cin >> n;
		cin >> k;
		for (int i = 0; i < n; i++) {
			cin >> temp;
			if (temp % k == 0) cout << 1;
			else cout << 0;
		}
		cout << endl;
	}
}