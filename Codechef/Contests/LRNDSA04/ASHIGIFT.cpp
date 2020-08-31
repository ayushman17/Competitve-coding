#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<pair<ll ,pair<ll,ll>>> v;
bool checkchef(ll x){
	int curr = 0;
    while(v[curr].second.first!=(-100)){
        if(v[curr].second.first==(-10)){
            x-=v[curr].second.second;
        }
        else{
            if(v[curr].second.first<=(x)){
                x+=v[curr].second.second;
            }
        }
        curr++;
    }
    return x>0?true:false;
}

void ans(ll low ,ll high){
	ll mid;
	// ll mid;
	while(low<=high){
		mid = low + ((high - low)/2);
		if(checkchef(mid)){
			high = mid-1;
		}
		else{
			low = mid+1;
		}
	}
	cout<<low<<endl;
}

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		v.clear();
		ll x,temp=0;
		cin>>x;
		ll b;
		cin>>b;
		for(int i=0;i<b;i++){
			ll x1,y1;
			cin>>x1>>y1;
			temp+=y1;
			v.push_back({x1,{-10,y1}});
		}
		ll tribe;
		cin>>tribe;
		// cout<<tribe<<endl;
		for(int i=0;i<tribe;i++){
			ll p,q,r;
			cin>>p>>q>>r;
			v.push_back({p,{q,r}});	
		}
		// cout<<tribe<<endl;
		v.push_back({x,{-100,-100}});
		sort(v.begin(), v.end());
		ans(1,temp);
	}
	return 0;
	}