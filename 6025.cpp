#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int &x : a) cin >> x;

    cout << "Buoc 0: " << a[0] << "\n";
    for(int i = 1 ; i < n ; i ++) {
        int pos = a[i];
        int j = i - 1;
        while(j >= 0 && a[j] > pos) {
            a[j + 1 ] = a[j];
            j--;
        }
        a[j + 1] = pos;
        cout << "Buoc " << i << ": ";
        for(int k = 0 ; k <= i ; k++) cout << a[k] << " ";
        cout << endl;
    }
}