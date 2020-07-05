#include <bits/stdc++.h>
#define ll long long
#define tc int t;cin>>t;while(t--)

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//	freopen("input.txt","r",stdin);
    
	tc{
	int k;
	cin >> k;
	char a[8][8] ;
	a[0][0] = 'O';
	k--;
	for(int r=0;r<8;r++){
		for(int c=0;c<8;c++){
			if(c==0 && r==0){
				continue;
			}
			if(k){
				a[r][c] = '.';
				k--;
			}
			else{
				a[r][c] = 'X';
			}
		}
	}
	
	for(int r=0;r<8;r++){
		for(int c=0;c<8;c++){
			cout <<a[r][c];
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}



