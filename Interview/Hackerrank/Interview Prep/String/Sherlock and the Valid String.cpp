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
	string a,s;
	pair<int,int> mypair,counts = {0,0};
	cin>>a;
	s = a;
	bool flag = true;
	int count=0,temp=-10000000000,diff=0;;
	unordered_map<char,int> umap;
	rep0(i,a.length()) umap[a[i]]++;
	int size = umap.size();
	a = "abcdefghijklmnopqrstuvwxyz";
	rep0(i,a.length()){
		rep0(j,a.length()){
			if(umap[a[i]]!=0 && i!=j && umap[a[j]]!=0){
				diff = abs(umap[a[i]] - umap[a[j]]);
				if(diff!=0) mypair = {umap[a[i]],umap[a[j]]};
				if(diff>1){
					flag = false;
					break;	
				}
				temp = diff;
			}	
		}
			
	}
	for(auto x : umap){
		if(x.second == mypair.first) counts.first++;
		else if(x.second == mypair.second) counts.second++;
		}
	
	if(flag == false && (mypair.first==1 && counts.first==1|| mypair.second==1 && counts.second==1)) flag=true;
	if(!((counts.first == 1 && counts.second == size-1) || (counts.first == size-1 && counts.second == 1))) flag = false;
	if(s.length()==1) flag = true;
	cout<<(flag ? "YES" : "NO")<<endl;

}