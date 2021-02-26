long dp[252][252];
long getWays(int n, vector<long> c) {

    for(long i=0;i<c.size();i++){
        for(long sum=0;sum<=n;sum++){
            if(sum==0) dp[i][sum]=1;
            else{
                long way1=0,way2=0;
                if(sum-c[i]>=0) way1=dp[i][sum-c[i]];
                if(i!=0) way2=dp[i-1][sum];
                dp[i][sum]=way1+way2;
            }
        }    
    }
    return dp[c.size()-1][n];
}
