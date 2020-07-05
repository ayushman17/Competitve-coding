#include <bits/stdc++.h>
#define ll long long

using namespace std;
ll sum_of_digits(ll k){
	ll sum=0,m;        
	while(k>0)    
	{    
	m=k%10;    
	sum=sum+m;    
	k=k/10;    
	}  
	return sum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin>>tc;
    while(tc--){
    	int n,a[2]={0,0};
    	ll chef,morty;
    	cin>>n;
    	for(int i=0;i<n;i++){
    		cin>>chef>>morty;
    		chef = sum_of_digits(chef);
    		morty = sum_of_digits(morty);
    		if(chef > morty){
    			a[0]++;
			}
			else if(chef < morty){
				a[1]++;
			}
			else{
				a[0]++;
				a[1]++;
			}
		}	
			if(a[0] > a[1]){
    			cout<<0<<" "<<a[0]<<endl;
			}
			else if(a[0] < a[1]){
				cout<<1<<" "<<a[1]<<endl;
			}
			else{
				cout<<2<<" "<<a[1]<<endl;
			}
	}

    return 0;
}

