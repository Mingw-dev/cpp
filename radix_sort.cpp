#include<bits/stdc++.h>
using namespace std;

void radixSort(vector<int> &a) {
    int n = a.size();

    if(n == 0) return;
    int exp = 1;

    int m = *max_element(a.begin() , a.end());

    vector<int> b(n);
    while(m / exp > 0) {
        int bucket[10] = {0};

        for(int i = 0 ; i < n ; i++ ) {
            int digit = ( a[i] / exp ) % 10;
            bucket[digit] ++;
        }

        // cong don
        for(int i = 1 ; i < 10 ; i ++) bucket[i] += bucket[i - 1];

        // sap xep
        for(int i = n - 1 ; i >= 0 ; i--) {
            int digit = (a[i] / exp) % 10;
            b[--bucket[digit]] = a[i];
        }

        // copy mang a

        for(int i = 0 ; i < n ; i++) a[i] = b[i];

        exp *= 10;

    }

}
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    int n;
    cin >> n;


    vector<int> a(n);
    for(int &x : a) cin >> x;

    radixSort(a);
    for(int x : a) cout << x << " ";
}