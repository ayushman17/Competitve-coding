#include<bits/stdc++.h>
using namespace std;

#define int long long
vector<int> primes(1000000,1);
int counts[1000001]={0};


void modified_sieve(){
	for(int i=2;i<=100000;i++){
	if(primes[i]==1) {
		for(int j=i;j<100001;j=j+i) {
			primes[j]=0;
			counts[j]++;
			}
		}
	}
	
}
signed main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;
	cin>>t;
	modified_sieve();
	while(t--){
	int a,b,k;
	cin>>a>>b>>k;
	int ans=0;
	for(int i=a;i<=b;i++){
		if(counts[i]==k) ans++;
		}
	cout<<ans<<endl;
	}
}