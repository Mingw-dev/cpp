#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        stack<int> st;
        vector<int> res(n);

        for(int &x : a) cin >> x;

        for(int i = n - 1 ; i >= 0 ; i--) {
            while(!st.empty() && a[i] >= st.top()) {
                st.pop();
            }

            if(st.empty()) res[i] = -1;
            else {
                res[i] = st.top();
            }

            st.push(a[i]);

        }
        for(int x : res) cout << x << " ";
        cout << endl;

    }
}