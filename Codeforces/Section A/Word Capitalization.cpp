#include<iostream>
#include<string>
using namespace std;
int main(){
	std::string str ;
	cin >> str ;
	int x = str[0];
	if(!(65<=x && x<=90))
	{
		str[0] = char(x-32) ;
	}
	
	cout << str;

}
