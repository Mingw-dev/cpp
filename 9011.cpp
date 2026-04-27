#include<bits/stdc++.h>
using namespace std;

int a[505][505];
bool vs[505][505];
int n , m;

int dx[] = {-1 , -1 , -1 , 0 , 0 , 1 , 1 , 1};
int dy[] = {-1 , 0 , 1 , -1 , 1 , -1 , 0 , 1};

void dfs(int i , int j) {
    vs[i][j] = true;

    for(int k = 0 ; k < 8 ; k++) {
        int x = i + dx[k];
        int y = j + dy[k];

        if(x >= 0 && x < n && y >= 0 && y < m) {
            if(a[x][y] && !vs[x][y]) {
                dfs(x , y);
            }
        }
    }
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        cin >> n >> m;

        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < m ; j++) {
                cin >> a[i][j];
                vs[i][j] = false;
            }
        }

        int cnt = 0;
        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < m ; j++) {
                    if(!vs[i][j] && a[i][j]) {
                        cnt++;
                        dfs(i, j);
                    }
            }
        }

        cout << cnt << endl;
    }
}