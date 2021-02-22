#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the gridlandMetro function below.
int gridlandMetro(int n, int m, int k, vector<vector<int>> track) {
int grid[n+1][m+1];
map<int,vector<pair<int,int>>> mp;
for(int i=0;i<track.size();i++){
    mp[track[i][0]].push_back({track[i][1],track[i][2]});
}
int ans=0;
for(int i=1;i<=n;i++){
    if(mp[i].size()==0){
        ans+=m;
        continue;
    }
    vector<pair<int,int>> x=mp[i];
    sort(x.begin(),x.end());
    stack<pair<int,int>> s;
    s.push(x[0]);
    cout<<x[0].first<<":"<<x[0].second<<endl;
    for(int i=1;i<x.size();i++){
        int start = x[i].first;
        int end = x[i].second;
        pair<int,int> top = s.top();
        if(top.second > start && top.second > end) continue;
        else if(top.second >= start){
            s.pop();
            s.push({top.first,end});
        }
        else if(top.second < start ) s.push({start,end});         
        
    }
    int remain=m;
    while (!s.empty()){
        
        pair<int,int> q = s.top(); 
        cout<<q.first << ":"<<q.second<<":"<<n<<":"<<m-(q.second - q.first + 1)<<endl;
        if(m-(q.second - q.first + 1)>0)
        remain=remain-(q.second - q.first + 1);
        s.pop(); 
        }
    ans+=remain;
}
return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nmk_temp;
    getline(cin, nmk_temp);

    vector<string> nmk = split_string(nmk_temp);

    int n = stoi(nmk[0]);

    int m = stoi(nmk[1]);

    int k = stoi(nmk[2]);

    vector<vector<int>> track(k);
    for (int i = 0; i < k; i++) {
        track[i].resize(3);

        for (int j = 0; j < 3; j++) {
            cin >> track[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = gridlandMetro(n, m, k, track);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}

