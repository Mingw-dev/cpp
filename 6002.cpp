#include<bits/stdc++.h>
using namespace std;
int x;
bool cmp(int a , int b) {
    return abs(a - x) < abs(b - x);
}
int main () {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n >> x;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        stable_sort(a.begin() , a.end() , cmp);
        for(int x : a) cout << x << " ";
        cout << endl;
    }
}