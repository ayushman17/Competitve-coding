#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int a[n];
    int temp;   
    unordered_map<int ,int> mp;
    for(int i=0;i<n;i++) {
        cin>>temp;
        mp[temp]++;
    }
    int ans=0;
    for(auto x : mp){
     ans += x.second/2;
    }
    cout<<ans<<endl;
}