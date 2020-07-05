#include <bits/stdc++.h>
#define ll long long
#define tc int t;cin>>t;while(t--)
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL)
#define in_txt freopen("input.txt","r",stdin)
using namespace std;

int main()
{
    IOS;
//    in_txt;
    tc{
	ll rec;
	cin >> rec;
	set <ll> r,c;
	for(ll i=0;i<4*rec-1;i++){
		ll x,y;
		cin >>x>>y;
		
		if(r.count(x)){
			r.erase(x);
		}
		else{
		r.insert(x);	
		}
		if(c.count(y)){
			c.erase(y);
		}
		else{
		c.insert(y);	
		}
	}
	cout << *(r.begin() ) << " " << *(c.begin()) << endl;
	}
    return 0;
}

