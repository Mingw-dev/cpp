#include<bits/stdc++.h>
using namespace std;

void solve() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for(int &x : a) cin >> x;
        vector <int> b = a;
        vector< vector<int> > v;
    

        while(!b.empty()) {
            v.push_back(b);
            if(b.size() == 1) break;

            vector<int> next;
            for(int i = 0 ; i < b.size() - 1 ; i++) {
                next.push_back(b[i] + b[i + 1]);
            }
            b = next;
        }

        for(int i = v.size() - 1 ; i >= 0 ; i--) {
            cout << "[";
            for(int j = 0 ; j < v[i].size() ; j++){
                cout << v[i][j];
                if(j < v[i].size() - 1) cout << " "; 
            }
            cout << "]" << " ";
        }
        cout << endl;
    }
}

int main() {
    solve();
}