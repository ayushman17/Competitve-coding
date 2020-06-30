#include <iostream>
using namespace std;

int reverse(int x);
int main() {
	int tc;
	cin >> tc ;
	int n,ans[tc];
	for(int i =0;i<tc;i++){
	    cin >> n;
	    ans[i] = reverse(n);
	    
	}
	for(int j =0;j<tc;j++){
		cout << ans[j] << endl;
	}
	return 0;
}
int reverse(int x){
	int rev =  0;
    while(x!=0){
    	
        int rem = x%10;
        rev = rev*10 + rem;
        x/= 10;
        
        
    }
    return rev;
}
