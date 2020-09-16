#include<bits/stdc++.h>
using namespace std;

int hcf(int l,int b){
	if(l==b) return b;
	if(l==0) return b;
	if(b==0) return l;
	if(l<b) return hcf(l,b-l);
	else return hcf(l-b,b);
}

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int l,b;
		cin>>l>>b;
		cout<<hcf(l,b)<<endl;
	}
}