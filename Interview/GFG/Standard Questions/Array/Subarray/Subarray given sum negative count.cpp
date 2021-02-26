
// https://www.geeksforgeeks.org/find-subarray-with-given-sum-in-array-of-integers/
int subArraySum(int arr[], int n, int sum){
    	unordered_map<int,int> umap;
        int currentsum=0;
        int count=0;
        for(int i=0;i<n;i++){
            currentsum+=arr[i];
            if(currentsum==sum) count++;
            if(umap.find(currentsum-sum)!=umap.end()) count+=umap[currentsum-sum];
            umap[currentsum]++;
        }
        return count;
    }
