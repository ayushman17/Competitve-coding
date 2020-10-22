#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tc;
	cin>>tc;
	while(tc--){
		int n,k,temp=0;
		cin>>n>>k;
		int q[n+1],i;
		for(i=1;i<=n;i++){
			cin>>q[i];
			if(q[i]+temp>=k){
				temp = temp+q[i]-k;
			}else{
				break;
			}
		}
		while(temp>0){
			temp-=k;
			i++;
		}
		cout<<i<<endl;
	}
}