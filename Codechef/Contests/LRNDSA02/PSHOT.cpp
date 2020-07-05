#include <bits/stdc++.h>
#include <string>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    freopen("input.txt","r",stdin);
   std::ios::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin>>t;
	//t=1;
	while(t--){
		int n,ag=0,bg=0,i,rema,remb;
		string s;
		cin>>n>>s;
		rema=n;
		remb=n;
		for(i=0;i<s.length();i++){
			if(s[i]=='1'){
				if(i%2==0){
					ag++;
				}
				else{
					bg++;
				}
			}
			if(i%2==0){
				rema--;
			}
			else{
				remb--;
			}
			if(ag>remb+bg){
				cout<<i+1<<endl;
				break;
			}
			if(bg>rema+ag){
				cout<<i+1<<endl;
				break;
			}
			if(ag==bg&&remb==0){
				cout<<i+1<<endl;
				break;
			}
		}
 
	}
	return 0;
}




