#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> a(n + 1);
    for(int i = 1 ; i <= n ; i++) cin >> a[i];
    vector<int> nxt(n + 1 , 0);
    stack<int> st;

    for(int i = n ; i >= 1 ;i--) {
        while(!st.empty() && a[st.top()] <= a[i]) {
            st.pop();
        }
        if(!st.empty()) {
            nxt[i] = st.top();
        }
        st.push(i);
    }

    vector<int> dp(n + 1 , 0);

    for(int i = n ; i >= 1; i--) {
        if(nxt[i] != 0) {
            dp[i] = 1 + dp[nxt[i]];
        } else dp[i] = 0;
    }

    while(q--) {
        int x;
        cin >> x;

        if(x >= 1 && x <= n) {
            cout << dp[x] << "\n";
        } else cout << 0 << "\n";
    }
}