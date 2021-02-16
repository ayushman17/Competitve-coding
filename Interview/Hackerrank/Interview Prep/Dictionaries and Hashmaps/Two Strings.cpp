#include<bits/stdc++.h>
#include<string.h>
using namespace std;
#define rep0(i,n) for(int i=0;i< (int) n;++i)

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		unordered_set<char> s;
		string x,y;
		cin>>x>>y;
		rep0(i,x.length()){
			s.insert(x[i]);
		}
		int flag=1;
		rep0(i,y.length()){
			if(s.find(y[i]) != s.end()){
				flag=0;
				break;	
			}
		}
		cout<<(flag ? "No" : "Yes")<<endl;
	}
}