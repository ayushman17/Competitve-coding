#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep0(i,n) for(int i=0;i< (int)(n);++i)
#define rep1(i,n) for(int i=1;i<= (int)(n);++i)
#define deb(x) cout<<x<<endl


signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int sum=-1e9;
	int arr[17][17];
	rep1(i,6){
		rep1(j,6){
			cin>>arr[i][j];
		}
	}
	rep1(i,4){
		rep1(j,4){
			sum=max(sum,arr[i][j+1]+arr[i][j+2]+arr[i][j]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2]);
		}
	}
	cout<<sum<<endl;
}