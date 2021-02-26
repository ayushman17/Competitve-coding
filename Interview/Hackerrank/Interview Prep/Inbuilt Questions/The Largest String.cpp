
string getLargestString(string s, int k) {
        unordered_map<char,int> mp;
        for(auto x : s) mp[x]++;
        string ans="";
        string x="abcdefghijklmnopqrstuvwxyz";
        reverse(x.begin(),x.end());
        for(int  i=0;i<x.length();i++){
            for(int  j=0;j<x.length();j++){
                if(i==j) continue;
                while((mp[x[i]]>k && mp[x[j]]!=0)){
                    string q(k,x[i]);
                    ans=ans+q;
                    ans=ans+x[j];
                    mp[x[i]]=mp[x[i]]-k;
                    mp[x[j]]--;    
                    }
                if(j==x.length()-1){
                    string w(min(mp[x[i]],k),x[i]);
                    mp[x[i]]=0;
                    ans=ans+w;
                }                
            }    
        }
    return ans;
}

