#include <bits/stdc++.h>
using namespace std;
vector<int> primes;
int sieve(){
	bool pfacs[10001];
	memset(pfacs,true,sizeof(pfacs));
	for(int i=2;i<=10000;i++){
		if(pfacs[i]){
			primes.push_back(i);
			for(int j = i*i;j<=10000;j+=i){
				if(j%i == 0) pfacs[j] = false;
			}
		}
	}
}
int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0);
	sieve();
	int tc;
	cin>>tc;
	while(tc--){
		int n,temp,temp1=INT_MAX,count=0;
		cin>>n;
		vector<int> v;
		while(n--){
			cin>>temp;
			v.push_back(temp);
		}
		for(int i=0;i<v.size()-1;i++){
			if(v[i]>v[i+1]) {
				count+=v[i] - v[i+1];
				v[i+1] = v[i];
			}
		}
		for(auto x : primes){
			temp=0;
			for(auto y : v){
				if(y%x!=0){
	                    temp+=x-(y%x);
	            }
	            if(temp>=temp1) break;
			}
			temp1=min(temp,temp1);
		}
		cout<<count+temp1<<endl;
	}
}