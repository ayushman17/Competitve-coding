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
		multiset <ll> p;
		cin>>n>>z;
		for(ll i=0;i<n;i++) 
		{
			cin>>a;
			p.insert(a);
		};
		while(true){
			count ++ ;
			a=*p.rbegin();
			
			p.erase(--p.end());
			z = z - a;
			p.insert(a/2);
			if(z<=0) {
			cout<<count<<endl;
				break;
			}
			if(*p.rbegin() == 0) {
				
				cout<<"Evacuate"<<endl;
			
			break;	
			}
//			cout << "DBG ------> "<< "rbegin " <<*p.rbegin() << " z "<< z << endl;
		}
		
	}
    return 0;
}


