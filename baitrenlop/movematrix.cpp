#include<bits/stdc++.h>
using namespace std;
int a[1001][1001], c[1001][1001], n , m;
void solve() {
    int i , j , x;
    memset(c , -1 , sizeof(c));
    queue<pair<int , int>> q;

    q.push({1 , 1});
    c[1][1] = 0;

    while(!q.empty()) {
        pair<int , int> t = q.front();
        
        i = t.first; j = t.second;
        x = a[i][j];
        q.pop();
        if(c[i][j + x] == -1) {
            q.push({i , j + x});
            c[i][j + x] = c[i][j] + 1;
        }

        if(c[i + x][j] == -1) {
            q.push({i + x , j});
            c[i + x][j] = c[i][j] + 1;
        }
        if(c[n][n] != -1) break;
    }
    cout << c[n][n] << endl;;
}
int main() {

}