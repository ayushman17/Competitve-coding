#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
    while(t--){
    	ll n,flag=0;
    	cin>>n;
    	ll a[n];
    	for(ll j=0;j<n;j++){
    		cin>>a[j];
		}
    	for(ll i=0;i<n-1;i++)
    	{
    		if(a[i] == a[i+1]){
    			continue;
			}
    		flag +=abs(a[i]-a[i+1])-1;
	}
	cout << flag << endl;

 
}
   return 0;
}

