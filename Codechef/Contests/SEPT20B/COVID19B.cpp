#include<bits/stdc++.h>
using namespace std;
#define int long long 

int n;
double ti;

bool checkMeet(int i1,int i2,int v1,int v2,map<double,vector<int>> &mp){
	if(v1 == 0 && v2 ==0) return false;
	if(v1  == v2) return false;
	double t = double((i1 - i2))/double((v2 - v1));
	if(t>=ti) {
		mp[t].push_back(i2);
		return true;
	}
	else return false;
}


void solveFor(int i,int *infect,int *a){
	map<double,vector<int>> mp;
		infect[i]=1;
		for(int j=1;j<=n;j++) {
			if(infect[j]==1) continue;
			if(checkMeet(i,j,a[i],a[j],mp)){
				infect[j] = 1;
		}
	}
	for(auto x : mp){
		ti = x.first;
		for(auto q : x.second) solveFor(q,infect,a);
		ti = x.first;
		sort(x.second.begin(), x.second.end(),greater<int>());
		for(auto q : x.second) solveFor(q,infect,a);
	}

}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tc;cin>>tc;
    for(int z=1;z<=tc;z++){
    	int mini=1e9,maxi=-1e9;
    	cin>>n;
    	int a[n+1];
		for(int i=1;i<=n;i++) cin>>a[i];	
		for(int i=1;i<=n;i++){
			int infect[n+1]={0};
			infect[i]=1;
			ti=0;
			solveFor(i,infect,a);
			int t1=0;
			for(int s=1;s<=n;s++){
				t1=t1+infect[s];
				} 
			mini=min(mini,t1);
			maxi=max(maxi,t1);
		}
	cout<<mini<<" "<<maxi<<endl;
    }
}

