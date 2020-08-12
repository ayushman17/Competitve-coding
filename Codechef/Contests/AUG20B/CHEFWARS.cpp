#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	ll tc; cin >> tc;
	while (tc--)
	{
		ll h, p;
		cin >> h >> p;
		while (true) {
			h = h - p;
			if (h <= 0) {
				cout << 1 << endl;
				break;
			}
			p = p / 2;
			if (p == 0 && h != 0) {
				cout << 0 << endl;
				break;
			}


		}
	}
	return 0;
}