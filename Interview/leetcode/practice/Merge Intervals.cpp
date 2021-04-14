class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> res;
        int length = intervals.size();
        for(int i=0;i<length;i++){
                if(i<length-1 && intervals[i][1] >= intervals[i+1][0]){
                    int end=max(intervals[i][1],intervals[i+1][1]);
                    intervals[i][1]=end;
                    intervals[i+1]=intervals[i];
                }
                else res.push_back(intervals[i]);
            }
        return res;
        }
};
