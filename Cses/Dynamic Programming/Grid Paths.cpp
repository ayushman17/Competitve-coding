#include<bits/stdc++.h>
using namespace std;

#define int long long
#define mod 1000000007;

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n;
	cin>>n;
	char matrix[n+1][n+1];

	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin>>matrix[i][j];

	int  dp[n+1][n+1]={0};
	if(matrix[1][1]=='*') dp[1][1]=0;
	else dp[1][1]=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(matrix[i][j] == '*') continue;
			int op1=0,op2=0;
			if(i==1 && j==1) continue;
			if(i!=1) op1 = dp[i-1][j];
			if(j!=1) op2 = dp[i][j-1];
			dp[i][j] = (op1 + op2) % mod;
		}
	}
	cout<<dp[n][n]<<endl;
}