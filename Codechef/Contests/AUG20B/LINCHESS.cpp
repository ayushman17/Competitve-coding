#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	ll tc; cin >> tc;
	while (tc--)
	{
		ll n, k, mini = INT_MAX, temp, temp2, temp3, flag = 0;
		cin >> n >> k;
		for (int i = 0; i < n; i++) {
			cin >> temp;
			if (k % temp == 0)
			{
				flag = 1;
				temp2 = temp;
				temp = (k / temp) - 1;
				if (mini > temp) {
					mini = temp;
					temp3 = temp2;
				}
			}
		}
		if (flag) cout << temp3 << endl;
		else cout << "-1" << endl;
	}
	return 0;
}