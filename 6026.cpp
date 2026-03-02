#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a (n);
    for(int &x : a) cin >> x;
    int cnt = 0;
    for(int i = 0 ; i < n ; i ++) {
        int check = false;
        for(int j = 0 ; j < n - i - 1 ; j++) {
            if(a[j] > a[j + 1]) {
                check = true;
                swap(a[j] , a[j + 1]);
            }
        }
        if(check) {
            cout << "Buoc " << i + 1 << ": ";
            for(int x : a) cout << x << " ";
            cout << endl;
        }
    }
}