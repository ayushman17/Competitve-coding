#include <bits/stdc++.h>
#define ll long long
#define tc int t;cin>>t;while(t--)
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL)
#define in_txt freopen("input.txt","r",stdin)
#define endl '\n'
using namespace std;
int pre(char x){
	 if(x == '^') 
    return 3; 
    else if(x == '*' || x == '/') 
    return 2; 
    else if(x == '+' || x == '-') 
    return 1; 
    else
    return -1;
}

int main()
{
    IOS;
//    in_txt;
    tc{
    int n;
	cin>>n;
	string exp;
	cin>>exp;
	stack <char> s;
	exp=exp+')';
	s.push('(');
	for(int i=0;i<=n;i++){
		if(exp[i] >= 'A' && exp[i] <= 'Z'){
			cout<<exp[i];
		}
		else{
			if(exp[i]=='('){
				s.push(exp[i]);
			}
			else if(exp[i]==')'){
				while(s.top() !='('){
					cout<<s.top();
					s.pop();
				}
				s.pop();
			}
			else{
				while(pre(s.top())>=pre(exp[i])){
					cout<<s.top();
					s.pop();
				}
				s.push(exp[i]);
			}
		}
	}
	cout<<endl;
}
    	
    return 0;
}

