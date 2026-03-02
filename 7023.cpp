#include<bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    cin.ignore();

    while(t--) {
        string s;
        getline(cin , s);
        stack<string> st;
        string word;

        stringstream ss (s);

        while(ss >> word) {
            st.push(word);
        }

        while(!st.empty()) {
            cout << st.top() << " ";
            st.pop();
        }
        cout << "\n";
    }
}
int main() {
    solve();
}