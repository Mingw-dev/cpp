#include<bits/stdc++.h>
using namespace std;
int n, k;
vector<int> arr;
void ql(vector<string> &a , int i) {
    for(int j = arr[i - 1] + 1; j <= a.size() - k + i ; j++) {
        arr[i] = j;
        if(i == k) {
            for(int l = 1 ; l <= k ; l++) cout << a[arr[l] - 1] << " ";
            cout << endl;
        }
        else ql(a , i + 1);
    }
}
void solve() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k;
    vector<string> ss;
    set<string> se;
    arr.assign(k + 1 , 0);
    for(int i = 0 ; i < n ; i++) 
    {
        string s;
        cin >> s;
        se.insert(s);
    }
    for(auto x : se) ss.push_back(x);
    ql(ss , 1);
}

int main() {
    solve();
}