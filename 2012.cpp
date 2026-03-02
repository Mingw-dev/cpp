#include<bits/stdc++.h>
using namespace std;
int cnt = 0;
void ql(vector< vector<int> > &a , int i , int j , int n , int m){
    if(i == n - 1 && j == m - 1) {
        cnt++;
        return;
    }
    if(i < n - 1) ql(a , i + 1 , j , n , m);
    if(j < m - 1) ql(a , i , j + 1 , n , m);
}
void solve() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n , m;
        cin >> n >> m;
        vector< vector<int> > a( n , vector<int> (m));

        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < m ; j++)
                cin >> a[i][j];
        }

        cnt = 0;
        ql(a , 0 , 0 , n , m);
        cout << cnt << endl;


    }
}

int main() {
    solve();
}