#include<bits/stdc++.h>
#include<string.h>
using namespace std;
#define int long long
#define rep0(i,n) for(int i=0;i< (int)(n);++i)
#define rep1(i,n) for(int i=1;i<= (int)(n);++i)
#define deb(x) cout<<x<<endl
#define io ios_base::sync_with_stdio(false);cin.tie(nullptr);

signed main(){
	io;
	int c,k;
	cin>>c>>k;
	vector<pair<int,int>> v(c);
	rep0(i,c){
		cin>>v[i].first;
		cin>>v[i].second;
	}
	 sort(v.rbegin(), v.rend());
	 int luck=0;
	rep0(i,c){
		if(k>0 && v[i].second==1){
			luck+=v[i].first;
			k--;
		} 
		else if(v[i].second==1){
			luck-=v[i].first;
		}
		else{
			luck+=v[i].first;
		}
	}

	cout<<luck<<endl;
}