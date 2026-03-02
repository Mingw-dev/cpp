#include<bits/stdc++.h>
using namespace std;
struct act {
    int first_time, last_time;
};

bool cmp( act a , act b) {
    return a.last_time < b.last_time;
}
void solve() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<act> arr(n);
        for(int i = 0 ; i < n ; i++) cin >> arr[i].first_time; 
        for(int i = 0 ; i < n ; i++) cin >> arr[i].last_time;

        sort(arr.begin() , arr.end() , cmp);

        int cnt = 1;
        int next_time = arr[0].last_time;
        for(int i = 1 ; i < n ; i++) {
            if(arr[i].first_time >= next_time) {
                cnt++;
                next_time = arr[i].last_time;
            }
        }
        cout << cnt << endl;

    }
}

int main() {
    solve();
}