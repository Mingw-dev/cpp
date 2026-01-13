#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    if(!(cin >> t)) return 0;
    while(t--){
        int n; 
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        for(int i = 1; i < n; i++){
            int pos = i + 1; // vị trí 1-based
            if(pos % 2 == 0) { // vị trí chẵn: a[i] >= a[i-1]
                if(a[i] < a[i-1]) swap(a[i], a[i-1]);
            } else { // vị trí lẻ: a[i] <= a[i-1]
                if(a[i] > a[i-1]) swap(a[i], a[i-1]);
            }
        }

        for(int i = 0; i < n; i++){
            if(i) cout << " ";
            cout << a[i];
        }
        cout << '\n';
    }
    return 0;
}
