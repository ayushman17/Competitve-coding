#include<bits/stdc++.h>
using namespace std;
 
#define mod 1000000007
#define int long long
 
signed main(){
	int n,x,temp=0;
	cin>>n>>x;
	vector<int> coins;
	for(int i=0;i<n;i++){
		cin>>temp;
		coins.push_back(temp);
	} 
 
	vector<int> dp(x+1,0);
	dp[0]=1;
	for(int i=0;i<=x;i++){
		for(auto a : coins){
			if(a <= i){
				dp[i] = (dp[i] + dp[i-a]) % mod;
			}
		}
	}
	cout<<dp[x]<<endl;
}
