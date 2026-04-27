#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll maxreact(int n , const vector<int>&h) {
    vector<int> l(n) , r(n);
    stack<int> st;

    for(int i = 0 ; i < n ; i++)
    {
        while(!st.empty() && h[st.top()] >= h[i]) st.pop();
        l[i] = st.empty() ? -1 : st.top();
        st.push(i);
    }

    while(!st.empty()) st.pop();

    for(int i = n - 1 ; i >= 0 ; i --) {
        while(!st.empty() && h[st.top()] >= h[i]) st.pop();
        r[i] = st.empty() ? n : st.top();
        st.push(i);
    }

    ll res = 0;
    for(int i = 0 ; i < n ; i++) {
        res = max(res, (ll)h[i] * (r[i] - l[i] - 1));
    }
    return res;
}
int main() {
    int m , n;
    cin >> m >> n;
    vector<int> a(n) , b(n);

    for(int i = 0 ; i < n ; i++) {
        cin >> a[i];
        b[i] = m - a[i];
    }

    ll y = maxreact(n , a);
    ll x = maxreact(n, b);
    cout << max(x , y);
}