#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	int tc;
	cin>>tc;
	while(tc--){
		int n,m,x,y;
		cin>>n>>m>>x>>y;
		n--;
		m--;
		if(n%x==0) {
			if(m%y==0) {
			cout<<"Chefirnemo"<<endl;
			continue;
			}
		}
		if(n>0 && m>0){
			if((n%x==1 && m%y==1)) {
				cout<<"Chefirnemo"<<endl;
				continue;
			}
		}
		if(n==1 && m==1) {
			cout<<"Chefirnemo"<<endl;
			continue;
		}
		cout<<"Pofik"<<endl;
	}
}