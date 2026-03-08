#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int &x : a) cin >> x;

        int pos;
        for(int i = 0 ; i < n - 1 ; i++) {
            if(a[i] > a[i + 1])
                pos = i + 1;
        }

        int cnt = 0;
        int dd;
        for(int i = pos ; i < n - 1 ; i++) {
            if(a[i] < a[i + 1]) cnt ++;
            else dd = i;
        }

        for(int i = dd ; i < n - 1 ; i++) {
            if(a[i] > a[i + 1]) cnt ++;
        }

        cout << cnt << endl;
    }
}