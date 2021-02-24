class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int a=0,l=nums.size();
        for(int i=0;i<l;i=i+1){
            a=a^nums[i];
        }
        return a;
    }
};
