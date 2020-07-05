#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
	int tc;
	cin>>tc;
	while(tc--)
	{
		int n;
		cin >> n;
		int max = 0;
		int si,pi,vi;
		for(int i=0;i<n;i++){
			cin>>si>>pi>>vi;
			int temp = (pi/(si+1))*vi;
			if(temp>max){
				max = temp;
			}
			
		}
		cout << max << endl;
	}
	return 0 ;
}
