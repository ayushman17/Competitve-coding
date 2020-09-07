#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main(){
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);    
	int t;cin>>t;
	while(t--){
		int n,ans=0,q;cin>>n;
		int total = (n*(n+1))/2;
		if(total%2 == 1){
			cout<<0<<endl;
			continue;
		} 
		double i  = floor(double((-1)+double(sqrt((1+(4*total)))))/2);
		for(int m=i-1;m<=i;m++){
			q=(total/2)-((m*(m+1))/2);
			if(m<0) continue;
			if(q>=n) continue;
			if(q<0) break;
			if(q==0){
				ans+=((m-1)*(m))/2+((n-m)*(n-m-1))/2;
				break;
			}
			ans+=min(min(m+q,n)-q,min(m+q,n)-m);
		}
	cout<<ans<<endl;			
	}
}
