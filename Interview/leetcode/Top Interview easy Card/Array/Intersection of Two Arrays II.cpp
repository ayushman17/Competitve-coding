class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> umap;
        for(int i=0;i<nums1.size();i++) umap[nums1[i]]++;
        nums1.clear();
        for(int i=0;i<nums2.size();i++){
            if(umap[nums2[i]]>0){
                nums1.push_back(nums2[i]);
                umap[nums2[i]]--;
            }
        }
        return nums1;
    }
};
