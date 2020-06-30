#include <iostream>
using namespace std;
#define ll long long
int MULTHREE();
int main() {
	int tc;
	cin >> tc;
	int ans[tc];
	for(int i = 0;i<tc;i++){
		ans[i] = MULTHREE();
	}
	for (int u=0;u<tc;u++){
		if(ans[u]==0) 
		cout << "NO" << endl;
		else
		cout << "YES" << endl;
	}
}

int MULTHREE(){
	ll k;
	int d0,d1,d2=1;
	cin >> k >> d0 >> d1;
	int s = d0 + d1;
	ll cycle_sum = ((k-3)/4);
	ll cycle_rem = (k-3)%4;
	if(k-3 < 0){
		cycle_sum = 0;
		cycle_rem = 0;
		d2 = 0;
	}
	
	int rem[4] = {0};
	for(int j =0;j<cycle_rem;j++){
		rem[j] = 1;
	}
	ll c = ((2*s)%10) + ((4*s)%10) + ((8*s)%10) + ((6*s)%10) ;
	cycle_sum = c * cycle_sum + s + s%10 +((2*s)%10)*rem[0] + ((4*s)%10)*rem[1] + ((8*s)%10)*rem[2] + ((6*s)%10)*rem[3];
	if (cycle_sum % 3 == 0){
		return 1;
	}
	else{
		return 0;
	}
}
