#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[100][100];
signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);
	int tc;
	cin>>tc;
	while(tc--){
		int n,t,ans=0;cin>>n;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++) {
				cin>>t;
				if(t == ((i-1)*n)+j) a[i][j]=1;
				else a[i][j]=0;
			}
		}
		for(int i=1;i<=n;i++){
			for(int j=2;j<n;j++) {
				if(a[i][j]!=a[i][j+1]) ans ++;
			}
			break;
		}
		if(a[1][n]==0) cout<<ans+1<<endl;
		else cout<<ans<<endl;
	}
}

