#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int tc; cin >> tc;
	while (tc--) {
		double Pc, Pr;
		cin >> Pc >> Pr;
		Pr = ceil(Pr / 9);
		Pc = ceil(Pc / 9);
		if (Pr > Pc) {
			cout << 0 << " " << Pc << endl;
		}
		else {
			cout << 1 << " " << Pr << endl;
		}
	}

}