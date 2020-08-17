#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll swaps = 0;
void merge(ll *a, ll s, ll e) {
	ll mid = s + ((e - s) / 2);
	ll i = s, j = mid + 1, k = s, temp[e];
	while (i <=  mid && j <= e) {
		if (a[i] <= a[j]) temp[k++] = a[i++];
		else {
			swaps += (mid + 1 - i);
			// cout << " s " << s << " e " << e << " mid " << mid << " i " << i << " swaps " << swaps << endl;
			temp[k++] = a[j++];
		}
	}
	while (i <= mid) temp[k++] = a[i++];
	while (j <= e) temp[k++] = a[j++];
	for (ll x = s; x <= e; x++) a[x] = temp[x];

}
void mergeSort(ll *a, ll s, ll e) {
	if (s < e) {
		ll mid = s + ((e - s) / 2);
		mergeSort(a, s, mid);
		mergeSort(a, mid + 1, e);
		merge(a, s, e);
	}
}
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	ll n;
	cin >> n;
	ll a[n];
	for (ll i = 0; i < n; i++) cin >> a[i];
	mergeSort(a, 0, n - 1);
	// for (ll q = 0; q < n; q++) cout << a[q] << " ";
	cout << swaps << endl;
	return 0;
}