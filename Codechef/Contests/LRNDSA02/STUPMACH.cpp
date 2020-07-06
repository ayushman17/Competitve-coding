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
    int n;
	    cin>>n;
	    
	    int a[n];
	    for(int i=0;i<n;i++)
	       cin>>a[i];
	       
	    int mi=INT_MAX;
	    ll tokens=0;
	    for(int i=0;i<n;i++){
	        mi = min(a[i],mi);
	        tokens+=mi;
	    }
	    cout<<tokens<<endl;
	}
    return 0;
}


