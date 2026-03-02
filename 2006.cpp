#include<bits/stdc++.h>
using namespace std;

int n , k;

vector< vector<int> > path;
vector<int> arr;
int sum = 0;
void ql(vector<int> &a , int i) {
    for(int j = i ; j < n ; j ++) {
        if(sum + a[j] <= k){
            sum += a[j];
            arr.push_back(a[j]);
            if(sum == k) path.push_back(arr);
            else ql(a , j + 1);
            sum -= a[j];
            arr.pop_back();
        } else break;

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
        path.clear();
        arr.clear();
        for(int &x : a) cin >> x;

        sort(a.begin() , a.end());

        ql(a , 0);
        if(path.empty()) cout << "-1\n";
        else {
            for(int i = 0 ; i < path.size() ; i++) {
                cout << "[";
                for(int j = 0 ; j <  path[i].size() ; j ++) {
                    cout << path[i][j];
                    if(j != path[i].size() - 1) cout << " ";
                }
                cout << "] ";
            }
        }
        sum = 0;
        cout << endl;
    }
}

int main() {
    solve();
}