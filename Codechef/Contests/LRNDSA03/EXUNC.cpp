#include<bits/stdc++.h>
using namespace std;


int getItr(set<int> &s, int i)
{
	auto itr = s.upper_bound(i);
	--itr;
	return *itr;
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	set<int> s;
	s.insert(1);
	int n, q;
	cin >> n >> q;
	int a[n];
	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int k = 2; k < n; k++) {
		if (a[k] % a[k - 1] == 0) continue;
		s.insert(k);
	}
	while (q--)
	{
		int type, w, temp;
		cin >> type >> w;
		if (type == 1) {

			cin >> temp;
			a[w] = temp;
			// a[w] % a[w-1] == 0
			// a[w] % a[w-1] != 0
			// a[w+1] % a[w] == 0
			// a[w+1] % a[w] == 0
			if (w > 1) {
				if (getItr(s, w) == w && (a[w] % a[w - 1] == 0)) {
					s.erase(w);
				}
				else if (getItr(s, w) < w && (a[w] % a[w - 1] != 0)) {
					s.insert(w);
				}
			}
			if (w < n) {
				if (getItr(s, w + 1) > w && (a[w + 1] % a[w] == 0)) {
					s.erase(w + 1);
				}
				else if (getItr(s, w) <= w && (a[w + 1] % a[w] != 0)) {
					s.insert(w + 1);
				}
			}
		}
		else {
			cout << getItr(s, w) << endl;
		}
	}
}




