#include <bits/stdc++.h>

using namespace std;

// Complete the anagram function below.
int anagram(string s) {
    if(s.length()%2==1) return (-1);
    string s1 = s.substr(0,s.length()/2);
    string s2 = s.substr(s.length()/2,s.length()/2);
    cout<<s1<<" "<<s2<<endl;
    unordered_map<char,int> umap;
    int ans=0;
    for(auto x : s1) umap[x]++;
    for(auto x : s2){
        if(umap[x]==0) ans++;
        else umap[x]--;
    }
    return ans;
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

        int result = anagram(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

