#include<bits/stdc++.h>
using namespace std;
int n, u , v;
bool vs[101];
int pth[101];
int a[101][101];
void dfs(int x) {
    vs[x] = true;
   

    if(x == v) return;
    for(int i = 1 ; i <= n ; i++) {
        if(a[x][i] && !vs[i]) {
            pth[i] = x;
            dfs(i);

        }
    }
}
int main() {

}