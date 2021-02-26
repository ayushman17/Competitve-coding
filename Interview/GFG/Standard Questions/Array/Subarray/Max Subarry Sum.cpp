
// https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1#
int maxSubarraySum(int arr[], int n){
        int alltimebest=arr[0],current=arr[0];
        for(int i=1;i<n;i++){
            if(current<0 && arr[i]>-1){
                current=arr[i];
            }
            else current+=arr[i];
            alltimebest=max(current,alltimebest);
        }
        return alltimebest;
    }