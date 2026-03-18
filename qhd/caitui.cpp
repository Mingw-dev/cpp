#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n , v; //n đồ vật và tổng thể tích là v

        cin >> n >> v;
        int a[n + 1]; // thể tích của mỗi vật
        int c[n + 1]; // giá trị mỗi vật
        for(int i = 1 ; i <= n ; i++) cin >> a[i];
        for(int i = 1 ; i <= n ; i++) cin >> c[i];

        int dp[n + 1][v + 1]; // dp[i][j] : giá trị của cái túi thứ i và có thể tích là j

        memset(dp , 0 , sizeof(dp));
        for(int i = 1 ; i <= n ; i++){
            for(int j = 1 ; j <= v ; j++) {
                dp[i][j] = dp[i - 1][j]; //không chọn vật thứ i

                if(j >= a[i]) dp[i][j] = max(dp[i][j] , dp[i - 1][j - a[i]] + c[i]);
            }
        }

        cout << dp[n][v] << endl;
    }
}