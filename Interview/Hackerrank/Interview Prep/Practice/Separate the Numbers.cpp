#include <bits/stdc++.h>

using namespace std;

// Complete the separateNumbers function below.
void separateNumbers(string s) {
bool flag=false;
for(int i=1;i<(s.length()/2)+1;i++){
    string a = s.substr(0,i);
    string q = to_string(stol(a)+1);
    while(a.length() < s.length()){        
        a.append(q);
        q = to_string(stol(q)+1);
    }
    if(a==s){
      flag=true;
      string mini = s.substr(0,i);
      cout<<"YES "<<mini<<endl;
      break;  
    } 
}
if(flag==false) cout<<"NO"<<endl;
}

int main()
{
    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        separateNumbers(s);
    }

    return 0;
}

