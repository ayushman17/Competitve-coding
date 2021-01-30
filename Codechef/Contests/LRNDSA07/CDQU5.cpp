#include<bits/stdc++.h>
using namespace std;

#define int long long
#define mod 1000000009



signed main(){
	int tc;cin>>tc;
	int dp[1000001]={0};
	dp[0]=1;
	for(int i=1;i<=1000000;i++)
		for(int j=2;j<=3;j++){
			if(j>i) break;
			dp[i]=(dp[i]+dp[i-j])%mod;
		}
	while(tc--){
		int x;
		cin>>x;
		cout<<dp[x]<<endl;
	}
}