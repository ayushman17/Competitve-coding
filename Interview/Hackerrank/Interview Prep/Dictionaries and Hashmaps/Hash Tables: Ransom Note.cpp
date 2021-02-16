#include<bits/stdc++.h>
#include<string.h>
using namespace std;
#define int long long
#define rep0(i,n) for(int i=0;i< (int)(n);++i)
#define rep1(i,n) for(int i=1;i<= (int)(n);++i)
#define deb(x) cout<<x<<endl


signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int x,y;
	cin>>x>>y;
	string u;
	string req[y];
	unordered_map<string,int> umap;
	rep1(i,x){
		cin>>u;
		umap[u]++;
	}
	rep0(i,y){
		cin>>req[i];
	}
	bool flag = false;
	for(auto q : req){
		if(umap[q]==0){
			flag = true;
			break;
		}
		else{
			umap[q]--;
		}
	}

	cout<<(flag ? "No" : "Yes")<<endl;

}