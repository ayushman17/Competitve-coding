#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int x;
	cin >> x;
    string ans[x] ;
    for (int i = 0; i < x; i++) {
        cin >> str;
        if (str.length() > 10) {
            str =   str[0] + to_string(str.length() - 2) + str[str.length() - 1] ;
        
        }
        ans[i] = str;
    }
    for(int j = 0 ; j<x ; j++){
        cout << ans[j] << endl;
    }
    
}
