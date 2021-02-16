#include <bits/stdc++.h>
using namespace std;

bool checkpalidrome(string s){
    string a = s;
    reverse(s.begin(), s.end());
    if(a==s) return true;
    else return false;
}
// Complete the palindromeIndex function below.
int palindromeIndex(string s) {
    if(checkpalidrome(s)) return (-1);
    for(int i=0;i<s.length()/2;i++){
        if(s[i]!=s[s.length()-i-1]) {
           string q = s.substr(0,i) + s.substr(i+1,s.length()-i+1);
           if(checkpalidrome(q)) return i;
           q = s.substr(0,s.length()-i-1) + s.substr(s.length()-i,s.length()-i+1);
           if(checkpalidrome(q)) return (s.length()-i-1);
        }
    }
return (-1);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = palindromeIndex(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

