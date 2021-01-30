#include<bits/stdc++.h>
using namespace std;

#define int long long 

signed main(){
	int n,k,pairs;
	cin>>n>>k>>pairs;
	vector<int> arr(n+1);
	vector<int> ar(n+1);
	for(int i=1;i<=n;i++) cin>>arr[i];
	ar = arr;
	sort(ar.begin(),ar.end());
	vector<int> dp(n+1);
	int last=1;
	dp[1]=ar[1];
	dp[0]=ar[1];
	for(int i=2;i<=n;i++){
		if(abs(ar[i]-ar[i-1])<=k)
			dp[i]=ar[last];
		else{
			dp[i]=ar[i];
			last=i;
		}
	}
	int a,b;
	for(int i=1;i<=pairs;i++){
		cin>>a>>b;
		if(a>b) swap(a, b);
		int it1 = find(ar.begin(), ar.end(), arr[a]) - ar.begin()  ;
		int it2 = find(ar.begin(), ar.end(), arr[b]) - ar.begin()  ;
		// cout <<"DBG---> dp["<<it1<<"]"<<dp[it1] <<" dp["<<it2<<"]:"<< dp[it2] <<endl;
		if(dp[it2]<=dp[it1]) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}

}