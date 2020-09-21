#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--){
    int n;
    cin>>n;
    int ans=INT_MAX;
    bool flag=false;
    for(int i=1;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            int x=((n/i)-i)/2;
            int y=((n/i)+i)/2;
            if(n+pow(x,2)==pow(y,2)){
                ans=min(ans,x);
                flag=true;
            }
        }
    }
    if(flag==true) cout<<ans*ans<<"\n";
    else cout<<-1<<"\n";
    }
}

