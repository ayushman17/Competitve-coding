#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int tc; cin >> tc;
	while (tc--) {
		int k, q;
		cin >> k >> q;
		int m[k], s[k], sum[k * k];
		for (int i = 0; i < k; i++) cin >> m[i];
		for (int i = 0; i < k; i++) cin >> s[i];
		int count = 0;
		for (int w = 0; w < k; w++) {
			for (int j = 0; j < k; j++) {

				sum[count] = m[w] + s[j];
				// cout << "DBG----> " << " m " << m[w] << " s " << s[j] << " sum " << sum << endl;
				count++;
			}
		}
		sort(sum, sum + (k * k));
		int temp;
		for (int i = 0; i < q; i++) {
			cin >> temp;
			cout << sum[temp - 1] << " ";
		}
		cout << endl;
	}
}