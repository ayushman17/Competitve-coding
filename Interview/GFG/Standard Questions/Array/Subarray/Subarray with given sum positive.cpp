
//https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1#
vector<int> subarraySum(int arr[], int n, int sum){
        
        for(int i=0;i<n;i++){
            int currsum=0,j=i;
            while(currsum<sum && j<n){
                currsum+=arr[j];
                j++;
            }
            // cout<<currsum<<":"<<i<<":"<<j<<endl;
            if(currsum==sum) return {i+1,j};
        }
        return {-1};
    }