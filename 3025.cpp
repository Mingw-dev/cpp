#include<bits/stdc++.h>
using namespace std;
struct td {
    int x , y;

};
bool cmp(td &a , td &b) {
    if(a.y != b.y)
    return a.y < b.y;

    return a.x < b.x;
}
void solve() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<td> arr(n);
        for(td &d : arr) cin >> d.x >> d.y;
        sort(arr.begin() , arr.end() , cmp);
        int cnt = 1;

        int next = arr[0].y;

        for(int i = 1 ; i < n ; i++) {
            if(arr[i].x >= next) {
                cnt++;
                next = arr[i].y;
            }
        }
        cout << cnt << "\n";
    }
}

int main() {
    solve();
}