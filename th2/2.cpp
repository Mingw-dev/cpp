#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll solve(string s , ll x , ll y) {
    if(s == "+") return x + y;
    if(s == "-") return x - y;
    if(s == "*") return x * y;
    else return x / y;
}
bool check(string s) {
    return s == "+" || s == "-" || s =="*" || s == "/";
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        vector<string> v(n);
        for(auto &x : v) cin >> x;
        reverse(v.begin() , v.end());
        
        stack<ll> st;

        for(int i = 0 ; i < n ; i++) {
            if(!check(v[i])) st.push(stoll(v[i]));
            else {
                if(st.size() > 1) {
                    ll re2 = st.top(); st.pop();
                    ll re4 = st.top(); st.pop();

                    ll res = solve(v[i] , re2 , re4);
                    st.push(res);
                }
            }
        }

        cout << st.top() << "\n";
    }
}