int findItems(vector<long> v, int n, int temp){
    int ans = 0;
    for (int i = 0; i < n; i++)
        ans += (temp/v[i]);
    return ans;
}

int binSearch(int l,int h,vector<long> v,long goal){
    while(l<h){
        int mid=(l+h)>>1;
        int ans= findItems(v,v.size(),mid);
        if(goal>ans) l=mid+1;
        else h=mid;
    }
    return h;
}


long minTime(vector<long> v, long goal) {
	sort(v.begin(),v.end());
	int h = (goal*v[v.size()-1])/v.size(),l=(goal*v[0])/v.size(),mid;
	return binSearch(l,h,v,goal);
}