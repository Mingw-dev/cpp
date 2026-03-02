#include<bits/stdc++.h>
using namespace std;
int n , a[1001], b[1001] = {0} , xuoi[20] = {0} , nguoc[20] = {0};
void in() {
    for(int i = 1 ; i <= n ; i++) cout << a[i];
    cout << endl;
}

int ql(int i) {
    int cnt = 0;
    for(int j = 1 ; j <= n ; j++) {
        if(!b[j] && !xuoi[i - j + n] && !nguoc[i + j - 1]) {

            a[i] = j;
            b[j] = 1 ; xuoi[i - j + n] = 1 ; nguoc[i + j - 1] = 1;
            if(i == n) 
            {
                cnt ++;
            }
            else cnt += ql(i + 1);
            b[j] = 0 ; xuoi[i - j + n] = 0 ; nguoc[i + j - 1] = 0;

        }
    }
    return cnt;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        cin >> n;
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        memset(xuoi, 0, sizeof(xuoi));
        memset(nguoc, 0, sizeof(nguoc));

        
        
        cout << ql(1) << endl;
    }
}
//xuoi[i - j + n] = 1
// nguoc[i + j - 1] = 1