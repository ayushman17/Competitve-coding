#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define oset tree<int,null_type,less_equal<int>,rb_tree_tag,tree_order_statistics_node_update>
typedef long long ll;

int main() {
	ll n;
	cin >> n;
	ll a[n];
	oset s;
	for (ll i = 0; i < n; i++) cin >> a[i];
	ll swaps = 0;
	for (ll i = n - 1; i >= 0; i--) {
		s.insert(a[i]);
		swaps += s.order_of_key(a[i]);
	}
	cout << swaps << endl;
	return 0;
}