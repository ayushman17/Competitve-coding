 
//https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1

 vector<int> leaders(int a[], int n){
        vector<int> ans;
        int maxi=a[n-1];
        ans.push_back(maxi);
        for(int i=n-2;i>=0;i--){
            if(a[i]>=maxi){
                ans.push_back(a[i]);
                maxi=a[i];
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }