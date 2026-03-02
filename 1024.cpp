#include<bits/stdc++.h>
using namespace std;
int ok = 1;
void sinh(vector<int> &a , int n , int k){
    int i = k - 1;
    while(i >= 0 && a[i] == n - k + i) --i;
    if(i == -1) ok = 0;
    else 
    {
        a[i] ++;
        for(int j = i + 1 ; j < k ; j++) a[j] = a[j - 1] + 1;
    }
}
void solve() {
    int n , k;
    cin >> n >> k;
    set<string> se;

    for(int i = 0 ; i < n ; i++) {
        string s;
        cin >> s;
        se.insert(s);
    }

    vector<string> v(se.begin() , se.end());
    vector<int> b(k);
    for(int i = 0 ; i < k ; i++) b[i] = i;
    int m = se.size();
    while(ok) {
        for(int i = 0 ; i < k ; i++) cout << v[b[i]] << " ";
        cout << "\n";
        
        sinh(b , m , k);
    }

}
int main() {
    solve();
}