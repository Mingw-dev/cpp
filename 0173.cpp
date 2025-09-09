#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int uc(int a , int b){
    while(b != 0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

ll bc(int a , int b){
    return 1LL * a * (b / uc(a , b));
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int m , n , a , b;
        cin >> m >> n >> a >> b;
        if(m > n) swap(m, n);
        int cnt = 0;
        for(int i = m ; i <= n ; i++){
            if( i % a == 0 || i % b == 0)
                cnt ++;
        }

        cout << cnt << "\n";
    }
}
