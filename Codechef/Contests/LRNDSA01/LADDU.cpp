#include <iostream>
#include <bits/stdc++.h> 
#include<string>
using namespace std;

int laddu(){
	int act,laddu,total=0;
	string origin ,a ;
	cin>>act>>origin;
	if(origin == "INDIAN")
	{
		laddu = 200;
	}
	else
	{
		laddu = 400;
	}
	while(act--){
		cin >> a;
		if(a == "CONTEST_WON")
		{
			int rank;
			cin >> rank;
			if(rank>20){
				rank=20;
			}
				
			total += 320 - rank;
		}
		else if(a == "TOP_CONTRIBUTOR")
		{
		total +=300;
		}
		else if(a == "BUG_FOUND")
		{
			int sev;
			cin >> sev;
			total += sev;
		}
		else 
		{
		total +=50;
		}
	}

	total /= laddu;
	return total;
}
int main(){
	
	int tc;
	cin >> tc;
	int ans[tc];
	for(int i=0;i<tc;i++)
	{
		int months = laddu();
		ans[i] = months;
	}
	for(int j=0;j<tc;j++){
		cout << ans[j] << endl;
	}
	return 0;
}
