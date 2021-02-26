/*
 * Complete the 'getMinDeletions' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int getMinDeletions(string s) {
    unordered_set<char> q;
    for(auto a : s) q.insert(a);
    return s.length() - q.size();
}


