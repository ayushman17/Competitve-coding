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
	string s;
	cin>>s;
	int n,ans=0;
	cin>>n;
	int cnt=0;
	rep0(i,s.size()){
		if(s[i]=='a') cnt++; 
	}
	ans = cnt*(n/s.size());
	rep0(i,n%s.size()){
		if(s[i]=='a') ans++;
	}
	deb(ans);

}