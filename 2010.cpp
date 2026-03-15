#include<bits/stdc++.h>
using namespace std;

int n , k;
int a[1001];
bool ok;
vector<int> res;
void ql(int i , int sum) {
    if(sum == k) {
        ok = true;
        cout << "[";
        for(int l = 0 ; l < res.size() ; l++) {
            cout << res[l];
            if(l != res.size() - 1) cout << " ";
        }
        cout << "]";
        return;
    }

    for(int j = i ; j < n ; j++) {
        if(sum + a[j] <= k) {
            res.push_back(a[j]);
            ql(j , sum + a[j]);
            res.pop_back();
        } else break;
    }
}
int main() {
    int t;
    cin >> t;

    while(t--) {
        cin >> n >> k;
        ok = false;
        for(int i = 0 ; i < n ; i++) cin >> a[i];
        res.clear();
        sort(a , a + n);
        ql(0 , 0);
        if(!ok) cout << "-1";
        cout << endl;
    }
}