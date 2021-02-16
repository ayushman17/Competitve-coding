#include <bits/stdc++.h>

using namespace std;

// Complete the gemstones function below.
int gemstones(vector<string> arr) {
    unordered_map<char, int> umap;
    int ans=0;
    for(int j=0;j<arr.size();j++) 
        for(auto ch : arr[j])  
            if(umap[ch] == j) umap[ch]++;
    for(auto y : umap) 
        if(y.second == arr.size()) ans++;
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> arr(n);

    for (int i = 0; i < n; i++) {
        string arr_item;
        getline(cin, arr_item);

        arr[i] = arr_item;
    }

    int result = gemstones(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

