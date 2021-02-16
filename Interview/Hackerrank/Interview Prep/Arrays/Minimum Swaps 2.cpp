#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep0(i,n) for(int i=0;i< (int)(n);++i)
#define rep1(i,n) for(int i=1;i<= (int)(n);++i)
#define deb(x) cout<<x<<endl


signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	time_t start, end; 
	time(&start); 
  
	int n;
	cin>>n;
	int arr[n];
	unordered_map<int,int> mp;
	rep1(i,n){
		cin>>arr[i];
		mp[arr[i]]=i;
	}
	int ans=0;
	rep1(i,n){
		if(arr[i]!=i){
			mp[arr[i]]=mp[i];
			swap(arr[i],arr[mp[i]]);
			ans++;
		}
	}



	// rep1(i,n) cout<<arr[i]<<" ";
	cout<<ans<<endl;
	time(&end); 

	 double time_taken = double(end - start); 
    cout << "Time taken by program is : " << fixed 
         << time_taken << setprecision(5); 
    cout << " sec " << endl; 
    return 0; 
}