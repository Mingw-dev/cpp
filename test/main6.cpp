#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for(long long &x : a) cin >> x;

    stack<int> st;
    long long ans = 0;

    for(int i = 0 ; i <= n ;i ++) {
        long long h = (i == n ? 0 : a[i]);

        while(!st.empty() && a[st.top()] > h) {
            long long hei = a[st.top()];
            st.pop();

            int l = st.empty() ? -1 : st.top();
            long long width = i - l - 1;

            ans = max(ans , hei * width);
        }
        st.push(i);
    }
    cout << ans;
}