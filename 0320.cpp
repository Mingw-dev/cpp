#include<bits/stdc++.h>
using namespace std;
void solve(string s){
    bool check = true;
    set <char> se;
    for(auto x : s){
       if(isdigit(x)) se.insert(x);
       else if(!isdigit(x)){
        cout << "INVALID\n";
        check = false;
        break;
       }
    }
    if(check){
        if(se.size() == 10) cout << "YES\n";
        else cout << "NO\n";
    }
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin , s);
        if(s[0] =='0') {
            cout <<"INVALID\n";
            continue;
        }
        solve(s);
        //cout << "\n";
    }
}