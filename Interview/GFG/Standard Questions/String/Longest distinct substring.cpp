class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> st;
        int maxi = 0,current=0;
        for(int i=0;i<s.length();i++){
            if(st.find(s[i])==st.end()){
              st[s[i]]=i;  
              current++;
              maxi=max(current,maxi);
            } 
            else{
                i=st[s[i]];  
                current=0;
                st.clear();
            }
        }
        return maxi;
    }
};
