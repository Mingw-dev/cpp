#include<bits/stdc++.h>
using namespace std;

const long long INF = 1e18;
const int MAX = 100005;

vector<pair<int , int>> a[MAX];
long long dis[MAX];
long long cnt[MAX];

int main() {
    int n , m;

    cin >> n >> m;

    for(int i = 1; i <= n ; i++) {
        a[i].clear();
        dis[i] = INF;
        cnt[i] = 0;
    }


    for(int i = 0 ; i < m ; i++) {
        int u , v , w;
        cin >> u >> v >> w;
        a[u].push_back({v , w});
        a[v].push_back({u , w});

    }

    priority_queue<pair<long long, int> , vector<pair<long long, int>> , greater<pair<long long, int>>> pq; 

    dis[1] = 0;
    cnt[1] = 1;

    pq.push({0 , 1});

    while(!pq.empty()) {
        long long d = pq.top().first;
        long long u = pq.top().second;

        pq.pop();

        if(d > dis[u]) continue;

       for(auto &ed : a[u]) {
            int v = ed.first;
            int w = ed.second;

            if(dis[v] > dis[u] + w) {
                dis[v] = dis[u] + w;
                cnt[v] = cnt[u];
                pq.push({dis[v] , v});
            } else if(dis[u] + w == dis[v]) {
                cnt[v] += cnt[u];
            }
       }
    }

    cout << dis[n] << " " << cnt[n] << endl;
}