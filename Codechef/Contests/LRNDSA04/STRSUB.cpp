#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,k,q;
string str;


int ansQuery(int l,int r){
	int ans=0;
	for(int i=l-1;i<r;i++){
		for(int j=i;j<min(i+((2*k)-1),r);j++){
			int count0=0,count1=0;
				if(str[i]=='1') count1++;
				else count0++;
				if(count1<=k && count0<=k) ans++;
				else break;
			}
		return ans;
	}	
}

signed main(){
	int tc;cin>>tc;
	while(tc--){
		cin>>n>>k>>q;
		cin>>str;
		while(q--){
			int l,r;
			cin>>l>>r;
			cout<<ansQuery(l,r)<<endl;
		}
		
	}
}

