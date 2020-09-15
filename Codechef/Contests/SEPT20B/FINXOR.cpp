#include<bits/stdc++.h>
using namespace std; 
#define int long long
int n;
int giveans(int q ,int value){
	int a[4] = {1,2,3,4},ans=0;
	if(q==1){
		for(int z=0;z<n;z++){
			ans = ans + (a[z]^value);
		}
	return ans;
	}
	else{
		for(int i=0;i<n;i++) ans = ans^a[i];
			// cout<<"ans : "<<ans<<endl;
		if(value == ans) return 1;
		else return (-1);
	}
}
signed main() 
{
 
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);

 int test_case;
 cin>>test_case;

 while(test_case--)
 {
     int xorSum=0,var;
    vector<int> xors;
    cin>>n;
    for(int k=1;k<=20;k++){
    	cout<<1<<" "<<(1ul<<k)<<endl;
    	cout.flush();
    	cin>>var;
    	// int var = giveans(1,(1ul<<k));
    	// cout <<" " <<var<<endl;
    	xors.push_back(var);
    }
    
    reverse(xors.begin(),xors.end());
    int total_sum=xors[0]-n*(1ul<<20);
    // cout << "  asdasdasd   "<<xors[0]<<" "<<total_sum<<endl;
    
    for(int j=1;j<20;j++){
    	if(xors[j]>=total_sum){
    		// cout << (1ul<<(xors.size()-j)) << endl;
    		xors[j]=((n-(xors[j]-total_sum)/(1ul<<(xors.size()-j)))/2);
    	}
    	else{
    		xors[j]=(n+(total_sum-xors[j])/(1ul<<(xors.size()-j)))/2;
    	}
    }

    for(int i=1;i<xors.size();i++){
    	// cout << "DBG=====>>  "<<xors[i]<<endl;
    	if(xors[i]%2!=0){
    		// cout << (1ul<<(xors.size()-i)) << endl;
        xorSum+=1ul<<(xors.size()-i);
    	}
    }
    if(total_sum%2!=0) xorSum++;
    cout<<2<<" "<<xorSum<<endl;
    cout.flush();
    int feedback;
    // feedback=giveans(2,xorSum);
    cin>>feedback;
    if(feedback == (-1)) break;
    cout<<endl;
    cout.flush();
 }
return 0;
}