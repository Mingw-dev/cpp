#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while( t -- ) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int &x : a) cin >> x;
        vector< vector<int> > step;
        for(int i = 0 ; i < n ; i++) {
            bool check = false;
            for(int j = 0 ; j < n - i - 1 ; j ++) {
                if(a[j] > a[j + 1]) {
                    swap(a[j] , a[j + 1]);
                    check = true;
                } 
            }
            if(check) step.push_back(a);
        }
        for(int i = step.size() - 1 ; i >= 0 ; i--) {
            cout << "Buoc " << i + 1 << ": " ;
            for(int x : step[i]) cout << x << " ";
            cout << endl;   
        }
    }
}