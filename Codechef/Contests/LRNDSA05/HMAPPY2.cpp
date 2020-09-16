#include<bits/stdc++.h>
using namespace std;
#define int long long

int gcd(int a ,int b){
	if(a==0) return b;
	return gcd(b%a,a);
}
int lcm(int a,int b){
	return (a*b)/gcd(a, b);
}
signed main(){
	int tc;cin>>tc;
	while(tc--){
		int n,a,b,k;
		cin>>n>>a>>b>>k;
		int ans=floor(double(n/a))+floor(double(n/b))-(2*floor(double(n/lcm(a,b))));
		if(ans>=k) cout<<"Win"<<endl;
		else cout<<"Lose"<<endl;
	}
}