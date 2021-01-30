#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int tc;
	cin>>tc;
	while(tc--){
		int n;
		cin>>n;
		vector<int> arr(n+1);
		for(int i=1;i<=n;i++) cin>>arr[i];
		vector<int> dp(n+1,0);
		dp[1]=1;
		for(int i=2;i<=n;i++){
			if(arr[i-1]<=arr[i]) dp[i]=dp[i-1]+1;
			else dp[i]=1;
		}
		for(int i=1;i<=n;i++){
			dp[0]+=dp[i];
		}
		cout<<dp[0]<<endl;
	}
}