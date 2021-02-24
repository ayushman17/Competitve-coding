class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0;
        int length = nums.size();
        for(int i=0;i<length-1;i++){
            if(nums[i]==0) count++;
            if(count>0) nums[i-count+1]=nums[i+1];
        }
        int j=length-1;
        while(count--){
          nums[j--]=0;
        } 
    }
};
