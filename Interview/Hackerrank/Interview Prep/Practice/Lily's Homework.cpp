#include <bits/stdc++.h>
using namespace std;

vector<string> split_string(string);

int lilysHomework(vector<int> arr) {
    unordered_map<int, int> original_indices_1,original_indices_2;
    for(int i=0;i<arr.size();i++){
      original_indices_1[arr[i]]=i;  
      original_indices_2[arr[i]]=i;
    } 
    vector<int> arrcopy = arr,anothercopy = arr;
    sort(arr.begin(),arr.end());
    int ascSwap=0,descSwap=0;
    //Iterating in ascending order
    //arr 1 2 3 4 5
    //arrcopy 3 4 2 5 1
    for(int i=0;i<arr.size();i++){
        if(arrcopy[i]!=arr[i]){
            original_indices_1[arrcopy[i]] = original_indices_1[arr[i]];
            swap(arrcopy[i],arrcopy[original_indices_1[arr[i]]]);
            ascSwap++;
        } 
    } 
    //Iterating in descending order
    //arr 1 2 3 4 5
    //anothercopy 3 4 2 5 1
    for(int i=0,j=arr.size()-1;i<arr.size();i++,j--){
        if(anothercopy[i]!=arr[j]){
            original_indices_2[anothercopy[i]] = original_indices_2[arr[j]];
            swap(anothercopy[i],anothercopy[original_indices_2[arr[j]]]);
            descSwap++;
        } 
    }
    return min(ascSwap,descSwap);
}

int main(){
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    int result = lilysHomework(arr);

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

