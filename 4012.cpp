#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n , m;
        cin >> n >> m;

        vector<int> p(n);
        vector<int> q(m);
        vector<int> pq(m + n - 1);

        for(int &x : p) cin >> x;
        for(int &x : q) cin >> x;

        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < m ; j++)
            pq[i + j] += p[i] * q[j];
        }

        for(int x : pq) cout << x << " ";
        cout << endl;


    }
}