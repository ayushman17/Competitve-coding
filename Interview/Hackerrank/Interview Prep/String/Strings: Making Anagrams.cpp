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
	string a,b;
	cin>>a>>b;
	unordered_map<char,int> umap;
	rep0(i,a.length()){
		umap[a[i]]++;
	}
	rep0(i,b.length()){
		// umap[b[i]]--;
		umap[b[i]]--;
	}

	int ans=0;
	for(auto x : umap){
		if(x.second < 0) ans=ans - x.second;
		else ans+=x.second;
	}

	cout<<ans<<endl;
}