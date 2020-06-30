#include <iostream>
using namespace std;

int main() {
	
	int n , k;
	cin >> n >> k;
    int scores[n] ;
    for(int i=0 ; i<n ; i++)
    {
 		cin >> scores[i];   	
	}
	int cut_off = scores[k-1];
	int j = 0;
	int adv = 0;
	while(j<n){
		if(scores[j]!=0 && scores[j]>=cut_off){
			adv++;
		}
		j++;
	}
	cout << adv;
 
    
}
