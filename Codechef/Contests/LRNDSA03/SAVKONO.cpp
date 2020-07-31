#include <bits/stdc++.h>
#define ll long long
#define tc int t;cin>>t;while(t--)
#define IOS ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define in_txt freopen("input.txt","r",stdin)
#define endl '\n'
using namespace std;

int main()
{
    IOS;
//    in_txt;
    tc{
		ll z,n,count=0,sum=0,k,a;
		priority_queue <ll> p;
		cin>>n>>z;
		for(ll i=0;i<n;i++) 
		{
			cin>>a;
			p.push(a);
		};
		while(true){
			count ++ ;
			
			z = z - p.top();
			p.push((p.top()/2));
			p.pop();
			if(z<=0) {
			cout<<count<<endl;
				break;
			}
			if(p.top() == 0) {
				cout<<"Evacuate"<<endl;
			
			break;	
			}
			
		}
		
	}
    return 0;
}


