#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
#define ll long long
int main() {
	int tc;
	cin >> tc;
	ll budgets[tc] ;
	for(int i=0;i<tc;i++){
		cin >> budgets[i];
	}
	sort(budgets, budgets + tc); 
	ll max = 0;
	for(int k=0;k<tc;k++){
		if(budgets[k]*(tc-k)>max){
			max = budgets[k]*(tc-k);
		}
	}
	cout << max ;
    return 0;
}
