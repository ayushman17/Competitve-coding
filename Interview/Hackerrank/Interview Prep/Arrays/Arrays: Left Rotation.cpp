#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep0(i,n) for(int i=0;i< (int)(n);++i)
#define rep1(i,n) for(int i=1;i<= (int)(n);++i)
#define deb(x) cout<<x<<endl

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,d;
	cin>>n>>d;
	int arr[n];
	rep0(i,n){
		cin>>arr[i];
	}
	d=d%n;
	int count=0;
	while(count<n){
		if(d==n){
			d=0;
		}
		cout<<arr[d]<<" ";
		d++;
		count++;
	}
	cout<<endl;
}