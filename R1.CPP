#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ; cin >> n;
    vector<vector<int>> a( n , vector<int>(n));
    for(int i = 0 ; i < n ; i ++){
        for(int j = 0 ; j < n ; j++)
            cin >> a[i][j];
    }
    vector <int> d(n - 1) , b(n-1);
    for(int i = 0 ; i < n - 1 ; i++){
        d[i] = i + 1;
    }
    int mn = 1e9;
    do {
        int cur = a[0][d[0]];
        for(int i = 0 ; i < n - 2 ; i++){
            cur += a[d[i]][d[i+1]];
        }
        cur += a[d[n - 2]][0];
        if(cur < mn) {
            mn = cur;
            b = d;
        }
    }
    while(next_permutation(d.begin() , d.end()));
    cout << mn << endl;
    cout << 1 << " ";
    for(int i = 0 ; i < n - 1 ; i++){
        cout << b[i] + 1 << " ";
    }
    cout << endl;
}