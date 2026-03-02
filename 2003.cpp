#include<bits/stdc++.h>
using namespace std;
int n;
vector<string> path;
void ql(vector< vector<int> > &a , int i , int j , string s) {
    if( i == n - 1 && j == n - 1) {
        path.push_back(s);
        return;
    }
    if( i + 1 < n && a[i + 1][j] == 1) ql(a , i + 1 , j , s + "D");
    
    if( j + 1 < n && a[i][j + 1] == 1) ql(a , i , j + 1 , s + "R");
}
void solve() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;   
    while(t--) {
        cin >> n;
        path.clear();
        vector< vector<int> > a(n , vector<int> (n));
        for(int i = 0 ; i < n ; i ++) {
            for(int j = 0 ; j < n ; j++) 
                cin >> a[i][j];
        }
        string s = "";
        if(a[0][0] == 1) {
            ql(a, 0, 0, s);
        }
        if(path.empty()) cout << "-1\n";
        else {
            for(int i = 0 ; i < path.size() ; i++) cout << path[i] << " ";
            cout << endl;
        }
    }
}

int main() {
    solve();
}