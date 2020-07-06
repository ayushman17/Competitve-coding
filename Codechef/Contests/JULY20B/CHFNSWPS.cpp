#include <bits/stdc++.h>
#define ll long long int
#define tc int t;cin>>t;while(t--)
#define um unordered_map<ll,ll> 
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL)
#define in_txt freopen("input.txt","r",stdin)
using namespace std;

int main()
{
    IOS;
//    in_txt;
    tc{
    	ll n,score=0;
    	queue <ll> qA,qB;
    	cin>>n;
    	um total,totalA,totalB;
    	ll A[n],B[n];
    	ll mi = INT_MAX;
    	for(ll i=0;i<n;i++){
    		cin>>A[i];
			total[A[i]]++;
			totalA[A[i]]++;
			mi = min(A[i],mi);
    		
		}
		for(ll j=0;j<n;j++){
			cin>>B[j];
			total[B[j]]++;
			totalB[B[j]]++;
    		mi = min(B[j],mi);
		}
		bool identical=true,ans_exist = true;
		for(auto x : total){
			if((x.second)%2==1){
				ans_exist=false;
				break;
			}
		}
		if(ans_exist==false){
			cout<<-1<<endl;
			continue;
		}
		sort(A,A+n);
		sort(B,B+n,greater<ll>());
		for(ll k=0;k<n;k++){
			if(A[k]!=B[n-k-1]){
				identical=false;
				break;
			}
		}
		if(identical){
			cout<<0<<endl;
			continue;
		}
		for(ll q=0;q<n;q++){
			if(totalA[A[q]]>total[A[q]]/2){
				qA.push(A[q]);
				totalA[A[q]]--;
			}
			if(totalB[B[q]]>total[B[q]]/2){
				qB.push(B[q]);
				totalB[B[q]]--;
			}
		}
		while(!qA.empty()){
			score += min(2*mi,min(qA.front(),qB.front()));
			qA.pop();
			qB.pop();
		}
		cout<<score<<endl;

	  }
    return 0;		
}





