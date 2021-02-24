class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits[digits.size()-1]!=9){
          digits[digits.size()-1]+=1;
            return digits;
        } else{
            for(int i=digits.size()-1;i>=0;i--){
                if(i==0 && digits[i]==9){
                    digits[i]=0;
                    vector<int> l;
                    l.push_back(1);
                    for(int i=0;i<digits.size();i++) l.push_back(digits[i]);
                    return l;
                }
                if(digits[i]==9) digits[i]=0;
                else{
                    digits[i]+=1;
                    return digits;
                }
            }
            return digits;
        }
    }
};
