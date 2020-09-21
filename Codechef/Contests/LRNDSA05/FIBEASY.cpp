#include<bits/stdc++.h>
using namespace std;
#define int long long

vector<int> fibs;

int n_fib(){
	int t1=1,t0=0,t2;
	fibs.push_back(t0);
	fibs.push_back(t1);
	for(int i=2;i<65;i++){
		fibs.push_back((t1+t0)%10);
			t2 = t1;
			t1=t0 + t1;
			t0 = t2;
	}		
}

signed main(){
	n_fib();
	// for(auto x : fibs) cout<<x<<" ";
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	int tc;
	cin>>tc;
	while(tc--){
		int n;
		cin>>n;
		int x = log2(n);
		int found =pow(2, x);
		if(found>n) x--;
		found = pow(2,x);
		cout<<fibs[(found%60)-1]<<endl;
	}
}


/*This is due to precision of log2 function.
try putting 2^56-1 as input in your code . u 
will see it gives 56 instead of 55. so u just 
need to raise the log2 value obtained to get 
the number again and compare it with your 
original number . since , we took floor of the 
log value , the number obtained by raising the 
log2 value must me smaller than original number 
( or equal ) , if it is not just decrement your 
log2 value obtained by 1.*/