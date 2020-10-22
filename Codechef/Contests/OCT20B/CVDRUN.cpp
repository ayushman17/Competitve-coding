#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tc;
	cin>>tc;
	while(tc--){
		int n,k,x,y;
		cin>>n>>k>>x>>y;
		int temp = (x+k)%n;
		bool flag = false;
		while(temp!=x){
			if(temp == y) {
				cout<<"YES"<<endl;
				flag = false;
				break;
			}
			cout<<temp<<endl;
			temp = (temp+k)%n;
		}
		if(flag) cout<<"NO"<<endl;
	}
}