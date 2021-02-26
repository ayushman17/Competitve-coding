int equilibriumPoint(long long a[], int n) {
        if(n==1) return 1;
        long long sum=0;
        for(int i=0;i<n;i++) sum+=a[i];
        int currentsum=0;
        for(int i=0;i<n;i++){
            if(currentsum==sum-a[i]-currentsum) return i+1;
            currentsum+=a[i];
        }
        return (-1);
    }