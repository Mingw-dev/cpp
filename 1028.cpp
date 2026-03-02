#include<bits/stdc++.h>
using namespace std;

bool check = true;
void sinh(vector<int> &a, int n , int k) {
    int i = k - 1;
    while(i >= 0 && a[i] == n - k + i) --i;
    if( i == -1 ) check = false;
    else {
        ++a[i];

        for(int j = i + 1 ; j < k ; j++) a[j] = a[j - 1] + 1; 
    }
}

void solve() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        int n , k; cin >> n >> k;
        vector<int> a(n);
        set<int> se;

        for(int &x : a) {
            cin >> x;
            se.insert(x);
        }

        vector<int> b(k);
        vector<int> v(se.begin(), se.end());
        for(int i = 0 ; i < k ; i++) b[i] = i;
        while(check) {
            for(int i = 0 ; i < k ; i++) cout << v[b[i]] << " ";
            cout << endl;
            sinh(b , se.size() , k);
        }
        check = true;

    }
int main() {
    solve();
}