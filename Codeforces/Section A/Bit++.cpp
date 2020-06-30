#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int n,flag = 0;
	string input;
	cin >> n;
	for(int i =0 ; i<n ; i++)
	{
		cin >> input ;
		if(input[1] == '+')
		{
			flag++;
		}
		else{
			flag--;
		}
	
	}
	cout << flag << endl;
}

