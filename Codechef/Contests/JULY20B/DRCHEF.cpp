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
    ll n,x,low,days=0;
    cin>>n>>x;
    vector<ll>country(n);
    for(int i=0;i<n;i++){
    	cin>>country[i];
	}
	sort(country.begin(),country.end());
	low = lower_bound(country.begin(), country.end(),x) - country.begin(); 
	
	for(int j=low;j<n;j++){
		if(x<country[j]){
			while(x<country[j])
  			{
  				x=2*x;
  				days+=1;
  			}
  			days+=1;
		}
		else{
		days+=1;	
		
		}
		x=2*country[j];
	}
    
    ll lower_bound_output = days+low;
    if(low!=0){
    	low--;
    	days=0;
    	for(int s=low;s<n;s++){
    		if(x<country[s]){
			while(x<country[s])
  			{
  				x=2*x;
  				days+=1;
  			}
  			days+=1;
		}
		else{
		days+=1;	
		
		}
		x=2*country[s];
		}
		ll lower_minus_one = low+days;
		ll ans = min(lower_minus_one ,lower_bound_output);
		cout<<ans<<endl;
	}
	else{
		cout<<lower_bound_output<<endl;
	}
}
    return 0;
}
