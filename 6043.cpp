#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        bool check = false;
        int sum = 0;
        for(int i = 0 ; i < n ; i++) {
            cin >> a[i];
            sum += a[i];
        }

        int suml = 0;
        for(int i = 0 ; i < n ; i++) {
            int sumr = sum - suml - a[i];

            if(sumr == suml) {
                check = true;
                cout << i + 1 << "\n";
                break;
            }

            suml += a[i];
        }

        if(!check) cout << "-1\n";
    }
}
