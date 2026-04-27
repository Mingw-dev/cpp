#include<bits/stdc++.h>
using namespace std;
bool hasop(const string &s , int l , int r) {
    int b = 0;
    for(int i = l + 1 ; i < r ; i++) {
        if(s[i] == '(') b++;
        else if(s[i] == ')') b--;
        else if(!b && (s[i] == '+' || s[i] == '-')) return 1;
    }

    return 0;
}
string solve(string s) {

    s.erase(remove(s.begin() , s.end() , ' ') , s.end());
    bool ok = 1;
    while(ok) {
        ok = 0;
        int n = s.size();
        vector<int> match(n);
        stack<int> st;
        for(int i = 0 ; i < n ; i++) {
            if(s[i] == '(') st.push(i);
            else if(s[i] == ')') {
                match[st.top()] = i;
                st.pop();
            }
        }
        for(int i = 0 ; i < n ; i++) {
            if(s[i] == '(') {
                int l = i, r = match[i];
                bool del = 0;
                if(!hasop(s , l , r)) del = 1;
                else if(l == 0 || s[l - 1] == '+' || s[l - 1] == '(') del = 1;
                


                if(del) {
                    s.erase(r , 1);
                    s.erase(l , 1);
                    ok = 1;
                    break;
                }
            }
        }
    }
    return s;
}
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        string s;
        getline(cin , s);
        if(s.empty()) {
           
            continue;
        }

        cout << solve(s) << "\n";
    }
}