class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> umap;
        vector<vector<string>> z;
        for(int i=0;i<strs.size();i++){
            string x = strs[i];
            sort(x.begin(),x.end());
            umap[x].push_back(strs[i]);
        }
        for(auto q : umap) z.push_back(q.second);
        return z;
    }
};
