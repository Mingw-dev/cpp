#include<bits/stdc++.h>
using namespace std;
int n, k;
vector<int> a;
vector<int> res;
vector< vector<int>> tt;
int dem = 0;

void ql(int i , int sum) {
    if(sum == k) {
        tt.push_back(res);
        dem ++;
        return;
    }
    for(int j = i ; j < n ; j++) {
        if(a[j] + sum <= k) {
            res.push_back(a[j]);
            ql(j , sum + a[j]);
            res.pop_back();
        }
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        a.clear();
        tt.clear();
        res.clear();
        cin >> n >> k;
        dem = 0;

        for(int i = 0 ; i < n ; i++) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        sort(a.begin() , a.end());
        ql(0 , 0);
        if(dem > 0) {
            cout << dem << " " ;

            for(int i = 0 ; i < tt.size() ; i++) {
                cout << "{";
                for(int j = 0 ; j < tt[i].size() ; j++) {
                    cout << tt[i][j];
                    if(j != tt[i].size() - 1) cout << " ";
                }
                cout << "} ";
            }
            cout << endl;
        } else cout << "-1\n";

    }
}