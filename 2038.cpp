#include<bits/stdc++.h>
using namespace std;
int n , k;
vector<int> tmp(1001, 0);
void ql(vector<int> &a , int i) {
    for(int j = tmp[i - 1] + 1 ; j <= n - k + i; j++) {
        tmp[i] = j;

        if(i == k) {
            for(int l = 1 ; l <= k ; l++) cout << a[tmp[l] - 1] << " ";
            cout << endl; 
        }
        
        else ql(a , i + 1);
    }
}
void solve() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        vector<int> a(n);

        for(int &x : a) cin >> x;

        sort(a.begin() , a.end());


        tmp.assign(k + 1 , 0);



        ql(a , 1);
        
    }
}

int main() {
    solve();
}