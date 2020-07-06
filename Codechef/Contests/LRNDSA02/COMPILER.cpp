#include <bits/stdc++.h>
#define ll long long
#define tc int t;cin>>t;while(t--)
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL)
#define in_txt freopen("input.txt","r",stdin)
using namespace std;

int main()
{
    IOS;
//    in_txt;
    tc{
    	stack <char> s;
    	ll pair=0;
    	string a;
    	cin >> a;
    	for(int i=0;i<a.size();i++){
    		if(a[i]=='<'){
    			s.push(a[i]);
			}
			else if(a[i] == '>')
			{
				if(!s.empty()){
					s.pop();
					if(s.empty()){
						pair =i+1;	
					}
					
				}
				else{
						pair =i;
					 	break;
					}		
			} 
		}
    	cout<<pair<<endl;
    	
	}
    return 0;
}


