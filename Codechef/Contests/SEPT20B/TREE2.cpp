#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);
	int tc;
	cin>>tc;
	while(tc--){
		int n,temp;
		cin>>n;
		unordered_set <int> s;
		for(int i=0;i<n;i++){
			cin>>temp;
			s.insert(temp);
		}
		s.erase(0);
		cout<<s.size()<<endl;
	}
}

