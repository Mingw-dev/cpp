#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> so;
int a[15];

void ql(int i) {
    if(i == n) {
        for(int j = 0 ; j < n ; j++) {
            cout << a[j] << "";
        }
        cout << endl;
        return;
    }
    for(int x : so) {
        a[i] = x;
        ql(i + 1);
    }
}
int main() {
    cin >> n;
    set<int> se;

    for(int i = 0 ; i < 3 ; i++) {
        int x; cin >> x;
        se.insert(x);
    }
    for(int x : se) so.push_back(x);
    ql(0);
}