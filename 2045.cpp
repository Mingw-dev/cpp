#include<bits/stdc++.h>
using namespace std;
int n;
char a[20];
vector<char> v;
void ql(int i) {
    for(int j = i ; j < n ; j++) {
        v.push_back(a[j]);
        for(auto x : v) cout << x;
        cout << " ";
        ql(j + 1);
        v.pop_back();
    }
}
int main() {

    int t;
    cin >> t;
    while(t--) {
        cin >> n;
        for(int i = 0 ; i < n ; i++) cin >> a[i];
        sort(a , a + n);
        v.clear();
        ql(0);
        cout << "\n";
    }
}