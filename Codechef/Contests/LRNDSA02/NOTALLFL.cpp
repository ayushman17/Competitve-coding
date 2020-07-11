#include <bits/stdc++.h>
#define ll long long
#define tc int t;cin>>t;while(t--)
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL)
#define in_txt freopen("input.txt","r",stdin)
#define endl '\n'
#define ff first
#define ss second
using namespace std;




const int MAX = 100020;
int n, t, k, num_of_each[MAX], max_till_now, temp, flavours_present;
queue<int> cakes;


int main()
{
    ios::sync_with_stdio(0);

    cin >> t;
    while (t--) {
        cin >> n >> k;

        while (!cakes.empty())
            cakes.pop();

        for (int i = 1; i <= k; i++) {
            num_of_each[i] = 0;
        }

        max_till_now = 0;
        flavours_present = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            if (num_of_each[temp] == 0) 
                flavours_present += 1;
            
            num_of_each[temp] += 1;
            cakes.push(temp);

            while (flavours_present == k) {
                temp = cakes.front();
                cakes.pop();
                num_of_each[temp]--;
                if (num_of_each[temp] == 0)
                    flavours_present--;
            }

            if (max_till_now < cakes.size()) 
                max_till_now = cakes.size();
        }
        cout << max_till_now << "\n";
    }

    return 0;
}

