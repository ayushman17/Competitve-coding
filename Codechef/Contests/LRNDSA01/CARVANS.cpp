#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int main() {
    int ntest;
    cin >> ntest;
	
    while (ntest--) {
      	int car_num;
		cin >> car_num;
		int speed[car_num],actual[car_num];
		for(int i=0;i<car_num;++i){
			cin >> speed[i] ;
			actual[i] = speed[i];
		}
		int flag = 1;
		for(int j=0;j<car_num-1;j++){
			
		if(speed[j+1]-speed[j]>0){
			speed[j+1] = speed[j];
		}
		if(actual[j+1] == speed[j+1] ){
			flag++;
		}
	}
		cout<<flag<<endl;
	}
    return 0;		
    }






