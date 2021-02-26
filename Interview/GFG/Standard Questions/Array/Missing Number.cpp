// https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1#

int MissingNumber(vector<int>& a, int n) {
    // Your code goes here
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++) if(a[i]!=i+1) return i+1;
}