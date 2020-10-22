#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	int tc;
	cin>>tc;
	while(tc--){
		int n,maxi=-1,time_lapsed=0,ans=0;
		cin>>n;
		int p[n],d[n];
		for(int i=0;i<n;i++){
			cin>>p[i];
		}	
		for(int i=0;i<n;i++){
			cin>>d[i];
			maxi = max(d[i],maxi);
		}	
		bool amax[maxi+1]={true};
		vector<pair<int,int>> v;
		for(int i=0;i<n;i++){
			v.push_back({p[i],d[i]});
		}
		sort(v.begin(), v.end());
		for(int i=v.size()-1;i>=0;i--){
			if(time_lapsed == maxi)	break;
			if(amax[v[i].second]==false){
				amax[v[i].second]=true;
				ans = ans+v[i].first;
				time_lapsed++;
			}
			else{
				for(int j=v[i].second;j>0;j--){
					if(amax[j]==false){
						ans = ans+v[i].first;
						amax[j]=true;
						time_lapsed++;
						break;
					}
				}
			}
		}
		cout<<ans<<endl;
	}
}
