#include <bits/stdc++.h>
#define ll long long
#define tc int t;cin>>t;while(t--)
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL)
#define in_txt freopen("input.txt","r",stdin)
#define endl '\n'
using namespace std;

int main()
{
    IOS;
    in_txt;
    
    	int n,x,size=0,nest[2],temp=0,q=0,pos;
    	cin>>n;
    	stack <ll> s;
    	for(int i=0;i<n;i++){
    		cin>>x;
    		
    		if(x==1){
    			s.push(x);
    		}
    		else{
    			s.pop();
			}
			if(size<s.size()){
				size = s.size();
				nest[0]=size;
				nest[1]=i+1;
			}
			if(s.size()){
		    	temp++;
		    	
		    	if(q<temp){
		    		q=temp;
		    		pos=i-q+2;
				}
			}
			else{
				temp=0;
			}
		}
		
    	cout<<nest[0]<<" "<<nest[1]<<" "<<q+1<<" "<<pos<<endl;
	
    return 0;
}


