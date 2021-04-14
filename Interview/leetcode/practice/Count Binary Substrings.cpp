class Solution {
public:
    int countBinarySubstrings(string s) {
        int ans[s.length()];
        int t=0;
        ans[0]=1;
        for(int i=1;i<s.length();i++){
            if(s[i-1]!=s[i]){
                ans[++t]=1;
            }
            else{
                ans[t]++;
            }
        }
        int count=0;
        for(int i=1;i<=t;i++) count+=min(ans[i-1],ans[i]);
        return count;
    }
};
