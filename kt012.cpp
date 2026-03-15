#include<bits/stdc++.h>
using namespace std;
int n;
long long k;
vector<int> a;
vector<long long> cnt;
int res = INT_MAX;
bool check = false;
void ql(int i , long long sum) {
    if(sum == k) {
        check = true;
        int sz = cnt.size();
        res = min(res , sz);
    }
    for(int j = i ; j < n ; j++){
        if(a[j] + sum <= k) {
            cnt.push_back(a[j]);
            ql(j + 1 , sum + a[j]);
            cnt.pop_back();
        }
    }
}

int main() {
    cin >> n >> k;
    a.clear();
    cnt.clear();

    for(int i = 0 ; i < n ; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    ql(0 , 0);
    if(check) {
        cout << res << endl;
    } else cout << "-1\n";
}