#include<bits/stdc++.h>
#include<string.h>
using namespace std;
#define int long long
#define rep0(i,n) for(int i=0;i< (int)(n);++i)
#define rep1(i,n) for(int i=1;i<= (int)(n);++i)
#define deb(y,x) cout<<y<<x<<endl

signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int x,y;
	cin>>x>>y;
	int arr[x];
	rep0(i,x) cin>>arr[i];
	sort(arr,arr+x);
	int sum=0,count=0;
	rep0(i,x){
		if(sum+arr[i]>y) break;
		else{
			sum+=arr[i];
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}