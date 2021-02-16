#include<bits/stdc++.h>
#include<string.h>
using namespace std;
#define int long long
#define rep0(i,n) for(int i=0;i< (int)(n);++i)
#define rep1(i,n) for(int i=1;i<= (int)(n);++i)
#define deb(x) cout<<x<<endl
#define io ios_base::sync_with_stdio(false);cin.tie(nullptr);

signed main(){
	int tc;
	cin>>tc;
	while(tc--){
		string a;
		cin>>a;
		int ans=0;
		rep0(i,a.length()){
			if(i==0) continue;
			if(a[i-1] == a[i]) ans++;
		}

	deb(ans);
	}
}