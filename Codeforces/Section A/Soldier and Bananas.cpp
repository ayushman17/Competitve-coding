  
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
int k , n , w ,total_sum = 0;
cin >> k >> n >> w;
for(int i =0;i<w;i++)
{
	total_sum = total_sum + (i+1)*k;
}
if((total_sum - n)<=0){
	total_sum = 0;
}
else{
	total_sum = total_sum-n;
}
cout << total_sum;

}

