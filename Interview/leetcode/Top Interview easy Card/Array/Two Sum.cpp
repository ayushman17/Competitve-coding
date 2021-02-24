class Solution {
public:
    vector<int> twoSum(vector<int>& v, int t) {
        vector<int> ans;
        unordered_map<int,int> m;
        for(int i = 0; i<v.size();i++){
                    if(m.find(t-v[i]) != m.end()){
                       ans.push_back(m[t - v[i]]);
                        ans.push_back(i);
                        return ans;
                    }
            m[v[i]]=i;     
        }
        return ans;
    }
};
