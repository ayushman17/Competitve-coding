#include <bits/stdc++.h>
using namespace std;


void permute(string a,int l,int r){
     if (l == r) 
        cout<<a<<endl; 
    else
    {
        for (int i = l; i <= r; i++){ 
            swap(a[l], a[i]); 
            permute(a, l+1, r); 
            swap(a[l], a[i]); 
        } 
    } 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int tc;cin>>tc;
	while(tc--){
	    string s;
	    cin>>s;
	    permute(s,0,s.length()-1);
	}
	return 0;
}