#include<bits/stdc++.h>
using namespace std;
int p_factors[100001]={0};
bool primes[100001];
int modified_sieve(){
	memset(primes,true,sizeof(primes));
	for(int i=2;i<=100000;i++) 
		if(p_factors[i]==0) 
			for(int j=i;j<=100000;j+=i) 
				p_factors[j]++;
}

int main(){
	int tc;
	cin>>tc;
	modified_sieve();
	while(tc--){
		int a,b,k;
		cin>>a>>b>>k;
		int count=0;
		for(int i=a;i<=b;i++)
			if(p_factors[i] == k) 
				count++;
		cout<<count<<endl;
	}
}