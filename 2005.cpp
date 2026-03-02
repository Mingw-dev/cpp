#include<bits/stdc++.h>
using namespace std;
string cur;
string s;
int u[16] = {0};
void in () {
    for(int i = 0 ; i < cur.size() ; i++) cout << cur[i];
    cout << " "; 
} 
void ql(int i) {
    for(int j = 0 ; j < s.size() ; j++) {
        if(!u[j]) {
            cur.push_back(s[j]);
            u[j] = 1;
            if(cur.size() == s.size()) in();
            ql(i + 1);
            cur.pop_back();
            u[j] = 0;
        }
    }
}

void solve(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        cin >> s;
        memset(u , 0 , sizeof(u));
        ql(0);

        cout << endl;
    }
}
int main() {
    solve();
}