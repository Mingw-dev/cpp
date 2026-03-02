#include<bits/stdc++.h>
using namespace std;
struct act {
    int sta , end;
};

bool cmp(act &a , act &b) {
    if(a.end != b.end)
    return a.end < b.end;
    else return a.sta < b.sta;
}
void solve() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<act> a(n);
        for(auto &x : a) cin >> x.sta >> x.end;
        sort(a.begin() , a.end() , cmp);
        int cnt = 1;
        int next_time = a[0].end;
        for(int i = 1 ; i < n ; i++) {
            if(a[i].sta >= next_time) {
                cnt++;
                next_time = a[i].end;
            }
        }
        cout << cnt << "\n";
    }
}
int main() {
    solve();
}