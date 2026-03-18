#include<bits/stdc++.h>
using namespace std;
int n , k;
int a[35];
vector<string> s;
void in() {
    for(int i = 1 ; i <= k ; i++) cout << s[a[i] - 1] << " ";
    cout << endl;
}
void ql(int i) {
    for(int j = a[i - 1] + 1; j <= s.size() - k + i ; j++) {
        a[i] = j;
        if(i == k) in();
        else ql(i + 1);
    }
}
int main() {
    cin >> n >> k;
    set<string> se;
    for(int i = 0 ; i < n ; i++) {
        string st;
        cin >> st;
        se.insert(st);
    }
    for(auto x : se) s.push_back(x);
    a[0] = 0;
    ql(1);

}