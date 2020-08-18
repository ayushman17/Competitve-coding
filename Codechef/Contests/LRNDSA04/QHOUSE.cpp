#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int low = 0 , high = 1000, mid, ans = 0, height, base, area,side;
	string temp;
	while (low <= high)
	{

		mid = low + ((high - low) / 2);
		cout << "? " << mid << " " << 0 << endl;
		fflush(stdout);
		cin >> temp;
		if (temp == "YES") {
			low = mid + 1;
			side = mid;
		}
		else {
			high = mid - 1;
		}
	}
	low = 2 * side;
	high = 1000;
	while (low <= high)
	{

		mid = low + ((high - low) / 2);
		cout << "? " << 0 << " " << mid << endl;
		fflush(stdout);
		cin >> temp;
		if (temp == "YES") {
			low = mid + 1;
			height = mid;
		}
		else {
			high = mid - 1;
		}
	}
	low = side;
	high = 1000;
	while (low <= high)
	{

		mid = low + ((high - low) / 2);
		cout << "? " << mid << " " << 2 * side << endl;
		fflush(stdout);
		cin >> temp;
		if (temp == "YES") {
			low = mid + 1;
			base = mid;
		}
		else {
			high = mid - 1;
		}
	}
//	cout <<" height " << height <<" base " <<base <<" side " <<side << endl;
	ans = (4*side*side)+ ((height-(2*side))*base);
	cout << "! " << ans << endl;
}
