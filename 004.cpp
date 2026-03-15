#include<bits/stdc++.h>
using namespace std;
int dem = 0;

int a[1001];
int n, k;

void ql(int start , int cnt , int val_last) {

    if(cnt == k) {
        dem++;
        return;
    }

    for(int i = start ; i < n ; i++) {
        if(a[i] > val_last) {
            ql(i + 1 , cnt + 1 , a[i]);
        }
    }
}
int main() {
    cin >> n >> k;

    for(int i = 0 ; i < n ; i++) {
        cin >> a[i];
    }
    ql(0 , 0 , -1);
    cout << dem << endl;
}