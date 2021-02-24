class Solution {
public:
    void rotate(vector<int>& v, int k) {
        k=k%v.size();
        cout<<k<<endl;
        int iter=0,i=k;
        vector<int> a(v.size());
        while(iter<v.size()){
            a[i++]=v[iter++];
            if(i==v.size()) i=0;
        }
        v=a;
    }
};
