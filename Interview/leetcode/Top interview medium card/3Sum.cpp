class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        unordered_map<int,int> freq;
        set<vector<int>> rs;
        vector<vector<int>> ans;
        for(auto x : nums) freq[x]++;
        int length = (int) nums.size()-1;
        for(int i=0;i<length;i++){
            for(int j=i+1;j<length;j++){
                if(i==j) continue;
                if((-(nums[i]+nums[j])==nums[i] ||-(nums[i]+nums[j])==nums[j]) && freq[-(nums[i]+nums[j])]<=1) continue;
                if(freq[(-(nums[i]+nums[j]))]>0){
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back((-(nums[i]+nums[j])));
                    sort(temp.begin(),temp.end());
                    rs.insert(temp);
                }
            }   
        }
         vector<int> temp;
            temp.push_back(0);
            temp.push_back(0);
            temp.push_back(0);
        if(freq[0]>=3){
            rs.insert(temp);
        }
        else rs.erase(temp);
        for(auto x : rs ) ans.push_back(x);
        return ans;
    }
};
