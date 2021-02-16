#include <bits/stdc++.h>

using namespace std;


string q = "abcdefghijklmnopqrstuvwxyz";
unordered_map<char,int> umap;

// Complete the weightedUniformStrings function below.
vector<string> weightedUniformStrings(string s, vector<int> queries) {
    vector<string> x;
    unordered_map<int,int> q;
    int count=1;
    q[count*umap[s[0]]]++;
    // x.push_back(umap[s[0]]);
    for(int i=1;i<s.length();i++){
        if(s[i] == s[i-1]){
            count++;
            q[count*umap[s[i]]]++;
        }
        else{
            count=1;
            q[count*umap[s[i]]]++;
        }
    }
    for(int i=0;i<queries.size();i++){
        if(q[queries[i]]!=0) x.push_back("Yes");
        else  x.push_back("No");
    }
    
    return x;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
    for(int i=0;i<q.length();i++) umap[q[i]]=i+1;
    string s;
    getline(cin, s);

    int queries_count;
    cin >> queries_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> queries(queries_count);

    for (int i = 0; i < queries_count; i++) {
        int queries_item;
        cin >> queries_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        queries[i] = queries_item;
    }

    vector<string> result = weightedUniformStrings(s, queries);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

