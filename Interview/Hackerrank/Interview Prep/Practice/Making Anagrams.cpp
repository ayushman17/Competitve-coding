#include <bits/stdc++.h>

using namespace std;

// Complete the makingAnagrams function below.
int makingAnagrams(string s1, string s2) {
unordered_map<char,int> s1map;
unordered_map<char,int> s2map;
for(auto x : s1) s1map[x]++;
for(auto x : s2) s2map[x]++;
string x = "abcdefghijklmnopqrstuvwxyz";
int ans=0;
for(int i=0;i<x.length();i++){
    if(s1map[x[i]]==0 && s2map[x[i]]!=0) ans=ans+s2map[x[i]];
    else if(s1map[x[i]]!=0 && s2map[x[i]]==0) ans=ans+s1map[x[i]];
    else if (s1map[x[i]]!=0 && s2map[x[i]]!=0) ans=ans+abs(s1map[x[i]] - s2map[x[i]]);
}
return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = makingAnagrams(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}

