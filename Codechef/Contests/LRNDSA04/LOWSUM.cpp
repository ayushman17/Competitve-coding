#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int

void solve(int k,int q,vector<ll> &m,vector<ll> &s,vector<int> &query)
{
   sort(m.begin(),m.end());
   sort(s.begin(),s.end());
   vector<ll> c;
   if(k<=100)
   {
       for(int i=0;i<k;i++)
       {
           for(int j=0;j<k;j++)
            c.push_back(m[i]+s[j]);
       }
   }
   else
   {
       ll maxi=m[100]+s[100];
       for(int i=0;i<k;i++)
       {
           for(int j=0;j<k && m[i]+s[j]<maxi;j++)
            c.push_back(m[i]+s[j]);
       }
   }
   sort(c.begin(),c.end());
   for(int i=0;i<q;i++)
   {
       cout<<c[query[i]-1]<<endl;
   }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    int k,q;
    vector<ll> m,s;
    vector<int> query;
    ll value;
    while(t--)
    {
        cin>>k>>q;
        for(int i=1;i<=k;i++)
        {
            cin>>value;
            m.push_back(value);
        }
        for(int i=1;i<=k;i++)
        {
            cin>>value;
            s.push_back(value);
        }
        for(int i=1;i<=q;i++)
        {
            cin>>value;
            query.push_back(value);
        }
        solve(k,q,m,s,query);
        m.clear();
        s.clear();
        query.clear();
    }
    return 0;
}
