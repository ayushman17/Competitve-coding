#include<bits/stdc++.h>
#include<string>
#include<cstring>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n, m, maxch = 0, maxc = 0;
	cin >> n >> m;
	string temp1, temp2;
	string country;
	string chef;
	map<string, string> qm;
	map<string, int> cm;
	map<string, int> chm;
	while (n--)
	{
		cin >> temp1 >> temp2;
		qm[temp1] = temp2;
		chm[temp1] = 0;
		cm[temp2] = 0;

	}
	while (m--) {
		cin >> temp1;
		chm[temp1]++;
		cm[qm[temp1]]++;
	}


	for (auto y : chm) {
		if (maxc < y.second) {
			maxc = y.second;
			chef = y.first;
		}
	}
	for (auto q : cm) {
		if (maxch < q.second) {
			maxch = q.second;
			country = q.first;
		}
	}
	cout << country << endl;
	cout << chef << endl;
}