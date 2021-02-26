/*
 * Complete the 'groupTransactions' function below.
 *
 * The function is expected to return a STRING_ARRAY.
 * The function accepts STRING_ARRAY transactions as parameter.
 */

vector<string> groupTransactions(vector<string> transactions) {
        map<string,int> mp;
        for(auto it : transactions) mp[it]++;
        transactions.clear();
        for(auto x : mp) transactions.push_back(x.first+" "+to_string(x.second));
        return transactions;
}


