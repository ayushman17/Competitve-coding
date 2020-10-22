#include<bits/stdc++.h>
using namespace std;
#define int long long int
int freq[101][101]={0};
vector<int> prime;
int prefix_sum(){
	bool primes[101];
	memset(primes,true,sizeof(primes));
	for(int i=2;i<=100;i++){
			if(primes[i]){
				prime.push_back(i);
			for(int j=i*i;j<=100;j+=i){
					primes[j]=false;
			}
		}
	}
}

int factors(){
	for(int i=2;i<101;i++){
		int a = i;
		int count=0;
		while(a>1){
			if((a%(prime[count]))!=0){
				count++;
				continue;
			} 
			freq[i][prime[count]]=freq[i][prime[count]]+1;
			a = a/prime[count];
		}
	}
}


signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	prefix_sum();
	factors();
	// for(int i=2;i<=100;i++){
	// 	cout<<"FOR i : "<<i<<endl;
	// 	for(int j=2;j<=100;j++){
	// 		cout<<j<<"s Power : "<<freq[i][j]<<endl;
	// 	}
	// }
	int n;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++) cin>>a[i];
	int t;cin>>t;
	while(t--){
		int li,ri,mi;
		cin>>li>>ri>>mi;
		int ans[101]={0};
		for(int i=li;i<=ri;i++){
			ans[]
		}
		cout<<ans%mi<<endl;
	} 
}