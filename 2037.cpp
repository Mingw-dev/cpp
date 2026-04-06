#include<bits/stdc++.h>
using namespace std;
int nt(int n) {
    for(int i = 2 ; i * i <= n ; i++) {
        if(n % i == 0) return 0;
    }

    return n > 1;
}

int n;
int a[1001];
vector<int> v;
vector<vector<int>> res;
void ql(int i , int sum) {
    for(int j = i ; j < n ; j++) {
        sum = sum + a[j];
        v.push_back(a[j]);

        if(nt(sum)) {
            res.push_back(v);
        }
        ql(j + 1, sum);
        v.pop_back();
        sum -= a[j];
    }
}
int main () {
    int t;
    cin >> t;
    while(t--) {
        cin >> n;
        memset(a , 0 , sizeof(a));
        v.clear();
        res.clear();
        for(int i = 0 ; i < n ; i++) cin >> a[i];
        sort(a, a + n , greater<int> ());
        ql(0 , 0);
        sort(res.begin() , res.end());
        for(int i = 0 ; i < res.size() ; i++) {
            for(int x : res[i]) cout << x << " ";
            cout << endl;
        }
    }
}