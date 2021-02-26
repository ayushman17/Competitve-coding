/* https://practice.geeksforgeeks.org/problems/count-the-triplets4615/1 */

int countTriplet(int arr[], int n){
	    unordered_map<int,int> umap;
	    set<vector<int>> s;
	    int count=0;
	    for(int i=0;i<n;i++) umap[arr[i]]++;
	    for(int i=0;i<n;i++){
	        for(int j=i+1;j<n;j++){
	            if(umap.find(arr[i]+arr[j])!=umap.end()){
	                vector<int> x;
    	            x.push_back(arr[i]);
    	            x.push_back(arr[j]);
    	            x.push_back(arr[i]+arr[j]);
    	            sort(x.begin(),x.end());
    	            s.insert(x);
	            } 
	        }
	    }
	    return s.size();
	}