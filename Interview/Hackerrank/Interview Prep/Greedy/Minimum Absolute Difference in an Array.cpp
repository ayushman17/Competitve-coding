#include<bits/stdc++.h>
#include<string.h>
using namespace std;
#define int long long
#define rep0(i,n) for(int i=0;i< (int)(n);++i)
#define rep1(i,n) for(int i=1;i<= (int)(n);++i)
#define deb(x) cout<<x<<endl
#define io ios_base::sync_with_stdio(false);cin.tie(nullptr);

signed main(){
	io;
	int n;
	cin>>n;
	vector<int> arr(n);
	bool flag = false;
	unordered_map<int,int> umap;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		umap[arr[i]]++;
		if(umap[arr[i]]>1) {
			flag=true;
			break;
		}
	}

	
	if(flag==true){
		cout<<0<<endl;
		return 0;
	}

	sort(arr.begin(), arr.end());
	int x=1e9;
	rep0(i,n){
		if(i==n-1) continue;
		int y=upper_bound(arr.begin(),arr.end(),arr[i])-arr.begin();
		x = min(x,abs(arr[i]-arr[y]));
	}
	cout<<x<<endl;
}