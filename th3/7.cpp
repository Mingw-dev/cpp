#include<bits/stdc++.h>
using namespace std;

const int inf = 1e9;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n , m;
        cin >> n >> m;

        vector<vector<int>> dis(n + 1 , vector<int> (n + 1 , inf));

        for(int i = 1 ; i <= n ; i++) dis[i][i] = 0;

        for(int i = 0 ; i < m ; i++) {
            int u , v;
            cin >> u >> v;

            dis[u][v] = 1;
        }

        for(int k = 1 ; k <= n ; k++) {
            for(int i = 1 ; i <= n ; i++) {
                for(int j = 1 ; j <= n ; j++) {
                    if(dis[i][k] != inf && dis[k][j] != inf) {
                        dis[i][j] = min(dis[i][j] , dis[i][k] + dis[k][j]);
                    }
                }
            }
        }

        double sum = 0;
        int cnt = 0;

        for(int i = 1 ; i <= n ; i++) {
            for(int j = 1 ; j <= n ; j++) {
                if(i != j && dis[i][j] != inf) {
                    sum += dis[i][j];
                    cnt++;
                }
            }
        }

        cout << fixed << setprecision(2) << sum/cnt << endl;
    }
}