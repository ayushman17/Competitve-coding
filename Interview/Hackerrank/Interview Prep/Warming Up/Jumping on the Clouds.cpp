#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep0(i,n) for(int i=0;i< (int)(n);++i)
#define rep1(i,n) for(int i=1;i<= (int)(n);++i)
#define deb(x) cout<<x<<endl


signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin>>n;
	int a[n];
	rep0(i,n) cin>>a[i];
	int ans=0,i=0;
	while(true){
		if(i==n-1) break;
		if(i < n-2){
		if(a[i+2]==1){
				i=i+1;
				ans++;
				}
			else{
				i=i+2;
				ans++;
			}
		}
		else{
			ans++;
			i++;
		}
	}
	deb(ans);
}