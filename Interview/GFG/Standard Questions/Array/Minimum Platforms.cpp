// https://practice.geeksforgeeks.org/problems/minimum-platforms-1587115620/1#

int findPlatform(int arr[], int dep[], int n){
    sort(arr,arr+n);
    sort(dep,dep+n);
    int i=1,j=0;
    int platforms=1,currplatforms=1;
	while(i<n && j<n){
	    if(arr[i]<=dep[j]){
	      currplatforms++;
	      i++;
	    } 
	    else {
	        j++;
	        currplatforms--;
	    }
	    platforms=max(platforms,currplatforms);
	    
	}
	return platforms;
}