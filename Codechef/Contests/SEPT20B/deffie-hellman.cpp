#include<bits/stdc++.h>
using namespace std; 
int main() {
long long g,p,a,b;
cin>>g>>p>>a>>b;
long long A = int(pow(g,a))%p;
long long B = int(pow(g,b))%p;

long long keyA =int(ceil(pow(B,a)))%p;
long long keyB =int(ceil(pow(A,b)))%p;

cout<<"A : "<<A<<" B : "<<B<<endl;
cout<<"keyA : "<<keyA<<" keyB : "<<keyB<<endl;
return 0;
}
