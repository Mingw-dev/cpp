#include<bits/stdc++.h>
using namespace std;
bool cmp(string &a , string &b){
    return a + b > b + a;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<string> a(n);
        for(auto &x : a){
            cin >> x;
        }
        sort(a.begin() , a.end() , cmp);
        for(auto x : a) cout << x;
        cout << "\n";
    }
}