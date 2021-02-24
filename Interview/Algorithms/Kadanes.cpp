#include <bits/stdc++.h>
using namespace std;

// Complete the maxSubarray function below.
void maxSubarray(vector<int> arr) {
    long long alltimebest=arr[0] , current=arr[0],subsequencesum=arr[0];
    int maxi=arr[0];
    bool flag=false;
    for(int i=1;i<arr.size();i++){
        maxi=max(maxi,arr[i]);
        if(current>=0) current+=arr[i];
        else if(arr[i]>current) current=arr[i];
        alltimebest=max(alltimebest,current);
        if(arr[i]>0){
            flag=true;
            subsequencesum+=arr[i]; 
        }
    }
    if(flag==false) subsequencesum=maxi;
    vector<int> v(2);
    v[0]=alltimebest;
    v[1]=subsequencesum;
    cout<<v[0]<<" "<<v[1]<<endl;
}

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int tc;
   cin>>tc;
   while(tc--){
	   int n;cin>>n;
	   vector<int> arr(n);
	   for(int i=0;i<n;i++) cin>>arr[i];
	   maxSubarray(arr);
   }
}
