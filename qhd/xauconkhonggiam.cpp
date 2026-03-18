// 

#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();

    int res = 0;
    vector<int> dp(n , 1);
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < i ; j++)
        {
            if(s[i] >= s[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }

        res = max(res , dp[i]);
    }

    cout << res << endl;
}