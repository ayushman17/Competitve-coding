#include<bits/stdc++.h>
#include<string.h>
using namespace std;
#define int long long

int nCr(int n, int r)
{
 
    long long p = 1, k = 1;
 
    if (n - r < r)
        r = n - r;
 
    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;
           	long long m = __gcd(p, k);
          	p /= m;
            k /= m;
            n--;
            r--;
        }
 
    }
 	else
       p = 1;
 
    return p;
}

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int tc;
	cin>>tc;
	while(tc--){
		unordered_map<string,int> umap;
		string s;
		cin>>s;
		float ans=0;
		for(int i=0;i<s.length();i++){
			for(int j=i;j<=s.length();j++){
				string k = s.substr(i,j-i);
				sort(k.begin(), k.end());
				umap[k]++;
			}
		}
		for(auto x : umap) if(x.second>1 && x.first.length()>0) ans=ans+nCr(x.second,2);
		cout<<ans<<endl;
	}

}