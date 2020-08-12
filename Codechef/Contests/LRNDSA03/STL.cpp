#include <bits/stdc++.h>
#define ll long long
#define tc int t;cin>>t;while(t--)
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL)
#define in_txt freopen("input.txt","r",stdin)
#define endl '\n'
using namespace std;


void vectorDemo(){
	vector<int> A = {11,2,31,14};
    
    
    
    sort(A.begin(),A.end()); // O(NlogN)
    
//    2,11,14,31
    bool present = binary_search(A.begin(),A.end(),3);
    present = binary_search(A.begin(),A.end(),11);
    
    A.push_back(100);
    
    present = binary_search(A.begin(),A.end(),100);
    
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(123);
    
    vector<int>::iterator it1 = lower_bound(A.begin(),A.end(),100);
//     lower_bound is >=,returns a iterartor 
    vector<int>::iterator it2 = upper_bound(A.begin(),A.end(),100);
//     upper_bound is strictly >,returns a iterartor 
     for(int i =0;i<A.size();i++) cout<<A[i]<<" "; 
// upperbound - lower bound of a sorted 
// array will return the no. of occurences of an element
    cout<<endl<<it2-it1<<endl; // 4 O(1)
    cout<<*it1<< "  " <<*it2<<endl;
//    sort in desc order
    sort(A.begin(),A.end(),greater<int>());
    for(int i =0;i<A.size();i++) cout<<A[i]<<" "; 
    
}

void setDemo(){
	set<int> s;
	s.insert(1);
	s.insert(2);
	s.insert(0);
	s.insert(-1);
	
	for(int x : s)
	cout<< x << " ";
	cout<<endl;
	
	// find in set
	
	auto it = s.find(-1);
	
	if(it == s.end())
	{
		cout << "NOT PRESENT\n";
	}
	else{
		cout << "PRESENT\n";
		cout << *it << endl;
	}
	
	auto it2 = s.upper_bound(-1);
	auto it3 = s.lower_bound(-1);
	cout << *it2 << " " << *it3 << endl;
//	s.erase() is used to remove elememt
	s.erase(0);
	for(int x : s)
	cout<< x << " ";
	cout<<endl;
	
		
}
int main()
{
	setDemo();
     
    return 0;
}



