#include<bits/stdc++.h>
#include<string>
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
	string s;
	cin>>s;
	int total=0,ans=0;
	rep0(i,n){
		bool temp=false;
		if(total<0) temp=true;
		else temp=false;
		if(s[i]=='U') total++;
		else total--;
		if(total == 0 && temp==true) ans++;
	}
	cout<<ans<<endl;
}