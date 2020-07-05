#include <iostream>

#define ll long long
using namespace std;
int main() {
	int tc;
	cin >> tc;
	while(tc--){
		int games;
		ll ans ;
		cin >> games ;
		for(int i=0;i<games;i++)
		{
		ll initial , rounds ,final;
		cin >> initial >> rounds >> final;
		
		if(final == initial){
			ans =  rounds/2;
		}
		else{
			ans  = rounds - rounds/2;
		}
			cout << ans << endl;
		}
	}
	return 0;
}

