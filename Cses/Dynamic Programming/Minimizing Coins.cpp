#include<bits/stdc++.h>
using namespace std;
 
#define int long long
 
signed main(){
	int n,x,temp=0;
	cin>>n>>x;
	vector<int> coins;
	for(int i=0;i<n;i++){
		cin>>temp;
		coins.push_back(temp);
	} 
 
	vector<int> dp(x+1,1e9);
	dp[0]=0;
	for(int i=0;i<=x;i++){
		for(auto a : coins){
			if(a <= i){
				dp[i] = min(dp[i],dp[i-a]+1);
			}
		}
	}
	if(dp[x]==1e9) cout<<(-1)<<endl; 
	else cout<<dp[x]<<endl;
}