#include<bits/stdc++.h>
using namespace std;
#define rep0(i,n) for(int i=0;i< (int) n;++i)


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	int a[n];
	rep0(i,n){
		cin>>a[i];
	}
	int swaps=0;
	rep0(i,n){
    	rep0(j,n-1){
        	if(a[j]>a[j+1]){
        		swaps++;
            	swap(a[j],a[j+1]);
        	}
    	}
    }
    cout<<"Array is sorted in "<<swaps<<" swaps."<<endl;
    cout<<"First Element: "<<a[0]<<endl;
    cout<<"Last Element: "<<a[n-1]<<endl;
}
