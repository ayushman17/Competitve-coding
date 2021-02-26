//https://www.cdn.geeksforgeeks.org/find-subarray-with-given-sum-in-array-of-integers/

vector<int> subarraySum(int arr[], int n, int s){
        unordered_map<int,int> umap;
        int currentsum=0;
        int firsti=(-1),secondi=0;
        for(int i=0;i<n;i++){
            currentsum+=arr[i];
            if(currentsum==s) return {1,i+1};
            if(umap.find(currentsum-s)!=umap.end()) return {umap[currentsum-s]+2,i+1};
            umap[currentsum]=i;
        }
        return {-1};
    }