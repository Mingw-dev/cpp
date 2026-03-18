#include<bits/stdc++.h>
using namespace std;
int main() {
    int n , k;
    cin >> n >> k;

    priority_queue<long long, vector<long long>, greater<long long>> pq;

    for(int i = 0 ; i < n ; i++) {
        int x;
        cin >> x;
        pq.push(x);
    }

    long long cost = 0;
    while(pq.size() > 1) {
        long long mn = pq.top();
        long long mx = 0;
        long long sum = 0;
        int cnt = 0;

        while(!pq.empty() && cnt < k) {
            mx = pq.top();
            sum += mx;
            pq.pop();
            cnt++;
        }
        cost += (mx - mn);
        pq.push(sum);
    }
    cout << pq.top() << " \n";
    cout << cost << endl;
}