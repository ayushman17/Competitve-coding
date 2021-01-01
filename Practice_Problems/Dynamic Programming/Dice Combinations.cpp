#include<bits/stdc++.h>
using namespace std;

#define int long long int 
#define mod 1000000007

signed main(){
	int n;
	cin>>n;
	vector<int> dp(n+1,0);
	dp[0]=1;
	for(int i=1;i<=n;i++){
		for(int x=1;x<7;x++){
			if(i<x) break;
			dp[i]= (dp[i] + dp[i-x]) % mod;
		}
	}
	cout<<dp[n];
}