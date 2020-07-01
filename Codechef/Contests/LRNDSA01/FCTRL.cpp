#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
#define ll long long
int main() {
	int tc;
	cin >> tc;
	
	for(int i=0;i<tc;i++){
	ll num;	
	cin >> num;
	ll cycle=5;
	ll ans=0;
	while(cycle<=num){
		ans += num/cycle;
		cycle = cycle*5;
	}	
	cout <<ans << endl;
	}
    return 0;
}
