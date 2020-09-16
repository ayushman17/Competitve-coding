#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> primes;
void getprimes(){
	bool prime[201];
	memset(prime,true,sizeof(prime));
	for(int i=2;i<=199;i++){
		if(prime[i]){
			primes.push_back(i);
			for(int j=i*i;j<=199;j++) if(j%i==0) prime[j] = false;
		} 
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	getprimes();
	int tc;cin>>tc;
	while(tc--){
		int flag=0;
		vector<int> semiprimes;
		cin>>n;
		for(int i=0;primes[i]<=n;i++){
			for(int j=0;primes[j]<=n;j++){
				if((primes[i]==primes[j]) || (primes[i]*primes[j])>n ) continue;
				semiprimes.push_back(primes[i]*primes[j]);
			}
		}
		for(auto i : semiprimes){
			for(auto j : semiprimes){
				if(i+j == n){
					flag = 1;
					break;
				}
			}
		}
		if(flag) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}