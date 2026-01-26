#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {

        int n;
        cin >> n;

        vector<int> a(n);
        set<int> b;
        for(int &x : a) {
            cin >> x;
            b.insert(x);
        }

        if(b.size() <= 1) cout << "-1\n";
        else {
            sort(a.begin() , a.end());

            cout << a[0] << " " << a[1] << endl;

        }



    }
}