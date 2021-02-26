class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
         int n = nums.size();
        if(n==0)return 0;
        if(n==1 && nums[0] == k)
            return 1;
        else if(n==1 && nums[0]!=k)
            return 0;
        int curr_sum =0,ans =0;
       unordered_map<int,int>mp;
        mp[0] = 1;
        for(int i=0;i<n;i++)
        {
            curr_sum += nums[i];
            if(mp.find(curr_sum - k)!= mp.end())
            ans+= mp[curr_sum - k];
            
            mp[curr_sum]++;
        }
        return ans;
        
    }
};
