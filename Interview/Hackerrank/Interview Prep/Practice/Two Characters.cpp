#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

// Complete the alternate function below.
string generatestring(char a,char b,string s){
    string newString="";
    for(int k=0;k<(int)s.length();k++) if(s[k]==a || s[k]==b) newString+=s[k];
    return  newString;
}

int alternate(string s) {
    if(s.length() == 1) return 0;
    string q = "abcdefghijklmnopqrstuvwxyz";
    int maxi=0;
    for(int i=0;i<(int)q.length();i++){
        for(int j=i+1;j<(int)q.length();j++){
            string newstring = generatestring(q[i], q[j], s);
            if(newstring=="") continue;
            char firstchar=q[j],secondchar=q[i];
            if(newstring[0] == q[i]){
                firstchar=q[i];
                secondchar=q[j];
            }  
            bool flag=true;
            for(int i=0;i<(int)newstring.length();i=i+2){
                if(i!=(int)newstring.length()-1){
                    if(newstring[i]!=firstchar || newstring[i+1]!=secondchar){
                        flag=false;
                        break; 
                    }    
                }else{
                    if(newstring[i]!=firstchar){
                        flag=false;
                        break; 
                    }
                }
            }
            if(flag==true) maxi=max(maxi,(int)newstring.length());
        }
    }
    return maxi;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string l_temp;
    getline(cin, l_temp);

    int l = stoi(ltrim(rtrim(l_temp)));

    string s;
    getline(cin, s);

    int result = alternate(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

