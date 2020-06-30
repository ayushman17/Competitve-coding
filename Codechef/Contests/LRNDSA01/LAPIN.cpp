#include <iostream>
#include <bits/stdc++.h> 

using namespace std;

int main() {
    int ntest;
    cin >> ntest;

    while (ntest--) {
        string s;
        cin >> s;
        int len = s.size();

        string a = s.substr(0, (len + 1) / 2);
        string b = s.substr(len - (len + 1)/2, (len + 1) / 2);

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        if (a == b) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}