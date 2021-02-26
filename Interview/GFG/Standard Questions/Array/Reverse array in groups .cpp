
// https://practice.geeksforgeeks.org/problems/reverse-array-in-groups0255/1

void reverseInGroups(vector<long long>& v, int n, int k){
        int prev=0;
        int i=k;
        while(true){
            if(i<n) reverse(v.begin()+prev, v.begin() +i);
            else{
              reverse(v.begin()+prev, v.end());
              break;
            } 
            prev=i;
            i=i+k;
        }
    }