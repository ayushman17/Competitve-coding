#include <bits/stdc++.h>
#define int long long
#define INF 1000000000000000000
#define lchild(i) (i*2 + 1)
#define rchild(i) (i*2 + 2)
#define mid(l, u) ((l+u)/2)
#define MOD 1000000007
using namespace std;
int n, r;
int g(int x, int arr[]){
    int deficit = 0;
    bool poss = true;
    for(int i = 0;i<n;i++){
        deficit += (x - arr[i]);
        if(deficit > 0){
            int remel = n-i-1;
            int cangive = remel*r*(i+1);
            if(cangive < deficit) poss = false;
        }
    }
    return poss;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>r;
    int a[n];
    for(int i = 0;i<n;i++) cin>>a[i];
    sort(a, a+n);
    int lo = a[0];
    int hi = a[n-1];
    int ans = lo;
    while(lo<=hi){
        int mid = (lo+hi)/2;
        //cout<<lo<<" "<<hi<<" "<<mid<<endl;
        if(g(mid, a)){
            ans = max(ans, mid);
            lo = mid+1;
        }
        else hi = mid - 1;
    }
    cout<<ans<<endl;
    return 0;
}