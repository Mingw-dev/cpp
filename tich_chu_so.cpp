#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        long long P;
        cin >> P;

        if(P == 0) {
            cout << 10 << endl;
            continue;
        }

        if(P == 1) {
            cout << 1 << endl;
            continue;
        }

        vector<int> digits;

        for(int i = 9; i >= 2; i--) {
            while(P % i == 0) {
                digits.push_back(i);
                P /= i;
            }
        }

        if(P > 1) {
            cout << -1 << endl;
        } else {
            sort(digits.begin(), digits.end());
            for(int x : digits)
                cout << x;
            cout << endl;
        }
    }
}