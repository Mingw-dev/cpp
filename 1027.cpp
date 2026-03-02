#include<bits/stdc++.h>
using namespace std;
int ok = 1;
void sinh(vector<int> &a , int n) {
    int i = n - 2;
    while(i >= 0 && a[i] > a[i + 1]) i--;
    if(i== -1) ok = 0;
    else {
        int j = n - 1;

        while(a[j] < a[i]) j--;
        swap(a[i] , a[j]);

        reverse(a.begin() + i + 1 , a.end());
    }
}
void solve() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    vector<int> a(n);
    set<int> se;

    for(int &x : a ) {
        cin >> x;
        se.insert(x);
    }

    vector<int> v(se.begin() , se.end());
    int m = v.size();
    vector<int> b(n);
    for(int i = 0 ; i < m ; i++) b[i] = i;
    while(ok) 
    {
        for(int i = 0 ; i < m ; i++) cout << v[b[i]] << " ";
        cout << endl;

        sinh(b , m);
    }


}

int main() {
    solve();
}