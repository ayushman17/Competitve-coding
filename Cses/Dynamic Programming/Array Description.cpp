#include<bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,m;
	cin>>n>>m;
	vector<int> arr(n+1);
	for(int i=1;i<n+1;i++) cin>>arr[i];
	int dp[n+2][m+2] = {0};
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++){
			if(i == 1){
					if(arr[i]==0 || arr[i]==j)
						dp[i][j]=1;
					else 
						dp[i][j]=0;
				}
			else if(arr[i]==0 || arr[i]==j)
				dp[i][j]= ((dp[i-1][j-1]+dp[i-1][j])%mod)+(dp[i-1][j+1]%mod);
		}
	int ans=0;
	for(int i=1;i<=m;i++)
		ans=(ans+dp[n][i])%mod;

	cout<<ans<<endl;
}