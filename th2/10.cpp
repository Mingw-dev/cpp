#include<bits/stdc++.h>
using namespace std;

vector<long long> a;
queue<long long> q;
void solve() {
    q.push(4);
    q.push(7);
    while(!q.empty()) {
        long long num = q.front(); q.pop();
        a.push_back(num);
        if(num <= 1e9) {
            q.push(num * 10 + 4);
            q.push(num * 10 + 7);
        }
    }

    sort(a.begin() , a.end());
}
int main() {
    solve();
    long long m , n;
    cin >> m >> n;

    long long res = 0;
    long long cur = m;
    for(auto x : a) {
        if(x < cur) {
            continue;
        }

        long long end = min(x , n);

        if(cur <= n) {
            long long cnt = end - cur + 1;
            res += cnt * x;
            cur = end + 1; 
        } else break;
    }

    cout << res << "\n";
}