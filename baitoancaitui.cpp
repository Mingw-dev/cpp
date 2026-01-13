#include <bits/stdc++.h>
using namespace std;

// int main() {
//     int n, s;
//     cin >> n >> s;
//     int w[n + 1], v[n + 1];
//     int re[n + 1][s + 1];
//     for (int i = 1; i <= n; i++) cin >> w[i];
//     for (int i = 1; i <= n; i++) cin >> v[i];
//     memset(re, 0, sizeof(re));
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= s; j++) {
//             re[i][j] = re[i - 1][j]; // không chọn vật i
//             if (j >= w[i]) {
//                 re[i][j] = max(re[i][j], re[i - 1][j - w[i]] + v[i]); // chọn vật i
//             }
//         }
//     }
//     for(int i = 1 ; i <= n ; i++){
//         for(int j = 1 ; j <= s ; j++){
//             cout << re[i][j] << " ";
//         }
//         cout << "\n";
//     }
//     cout << re[n][s];
// }
int main(){
    int n , s;
    cin >> n >> s;
    vector<pair<int , int>> a(n + 1);
    for(int i = 1 ; i <= n ; i++)
        cin >> a[i].first >> a[i].second;
    int dp[n + 1][s + 1];
    memset(dp , 0 , sizeof(dp));
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= s ; j++){
            // ko lay vat
            dp[i][j] = dp[i - 1] [j];
            if(j >= a[i].first){
                dp[i][j] = max(dp[i][j] , dp[i - 1][j - a[i].first] + a[i].second);
            }
        }
    }
    int frq = -1;
    vector<pair<int, int>> b;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= s ; j++){
            b.push_back({i , j});
        }
    }

    cout << dp[n][s];
    cout << " ";
    int m = b.size();
    cout << b[m - 1].first << " " << b[m - 1].second << endl;
}
