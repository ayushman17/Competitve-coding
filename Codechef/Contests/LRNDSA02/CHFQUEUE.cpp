#include <bits/stdc++.h>
#define ll long long
#define tc int t;cin>>t;while(t--)
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL)
#define in_txt freopen("input.txt","r",stdin)
#define endl '\n'
using namespace std;
ll N = 1000000007;
int main()
{
    IOS;
//    in_txt;
    ll n,k,f=1;
    stack <ll> s;
    cin>>n>>k;
    ll a[n],ptr=n-1;
    for(ll i=0;i<n;i++) cin>>a[i];
    while(ptr>=0){
    	
    	
		while(!s.empty()){
		if(a[s.top()]<a[ptr]) break;
		s.pop();
		}
		
		if(!s.empty()){
			f=(f%N)*((s.top()-ptr+1)%N)%N;
		}
		s.push(ptr);
		ptr--;
	}
	cout<<f<<endl;
    return 0;
}


