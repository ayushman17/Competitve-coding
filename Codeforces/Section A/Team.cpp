#include <iostream>
using namespace std;

int main() {
	
	int n ;
	cin >> n ;
	
    int petya, vasya, tonya, flag = 0;
    for(int i=0 ; i<n ; i++)
    {
 		cin >> 	petya >> vasya >> tonya;
 		if(petya+vasya+tonya >=2 )
 		{
 			flag++;
		}
	}
	cout << flag;
}

