#include <bits/stdc++.h>

using namespace std;
int dp[5001][5001]; //Make array outside the function , or else the memory stack will overflow and will give segfault error
// Complete the commonChild function below.
int commonChild(string s1, string s2) {
    if(s1[0]==s2[0]) dp[0][0]=1;
    else dp[0][0]=0;
    for(int i=0;i<s1.size();i++){
        for(int j=0;j<s2.size();j++){
            if(i>0) dp[i][j]=dp[i-1][j];
            if(j>0) dp[i][j]=max(dp[i][j],dp[i][j-1]);
            if(s1[i]==s2[j]){
                if(i>0 && j>0) dp[i][j]=max(dp[i][j],(1+dp[i-1][j-1]));
                else dp[i][j]=1;   
            }  
        }
    }
    return dp[s1.size()-1][s2.size()-1];
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = commonChild(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}


