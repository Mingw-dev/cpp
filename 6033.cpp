#include<bits/stdc++.h>
using namespace std;

void solve() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for(int &x : a) cin >> x;

        stack<int> st;
        for(int i = 0 ; i < n ; i++) {
            if(st.empty() || a[i] < a[st.top()]) st.push(i);
        }

        int mindiff = -1;
        for(int i = n - 1 ; i >= 0 ; i--) {
            while(!st.empty() && a[i] > a[st.top()]) {
                mindiff = max(mindiff , i - st.top());
                st.pop();
            }
        }

        cout << mindiff << "\n";
    }
}

int main() {
    solve();
}