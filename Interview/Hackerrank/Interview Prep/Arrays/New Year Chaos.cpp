#include<bits/stdc++.h>
using namespace std;
// #define int long long


void minimumBribes(vector<int> q){
	int ans=0;
    for(int i=q.size()-1;i>=0;i--){
        if(q[i] - (i+1) > 2) {
            cout<<"Too chaotic"<<endl;
            return;
        }
        for (int j=max(0,(q[i]-2));j<i;j++)
            if (q[j] > q[i]) ans++;
    }
    cout<<ans<<endl;
}


int main(){
	int tc;cin>>tc;
	while(tc--){
		int n;
		cin>>n;
		vector<int> x;
		for(int i=0;i<n;i++) cin>>x[i];
		minimumBribes(x);
	}
}