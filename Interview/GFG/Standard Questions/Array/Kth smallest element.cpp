// https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1#

int kthSmallest(int arr[], int l, int r, int k) {
    sort(arr,arr+r-l+1);
    int count=1;
    if(k==1) return arr[0];
    for(int i=1;i<r-l+1;i++){
        if(arr[i]!=arr[i-1]) count++;
        if(count==k) return arr[i];
    }
}