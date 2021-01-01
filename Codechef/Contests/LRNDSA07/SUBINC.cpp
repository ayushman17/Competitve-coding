#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int tc;
	cin>>tc;
	while(tc--){
		int n,count=0,i=0,j=0;
		cin>>n;
		int a[n];
		for(int k=0;k<n;k++) cin>>a[k];
		while(i<=n-2){
			if(a[j]>a[j+1] || j>n-2){
				i++;				
				j=i;
				continue;
			}
			j++;				
			count++;
		}
		cout << count + n << endl;
	}
}