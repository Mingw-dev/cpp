#include<bits/stdc++.h>
using namespace std;
long long C(int n, int k) {
    if (k > n) return 0;
    if (k > n - k) k = n - k; // tối ưu
    long long res = 1;
    for (int i = 1; i <= k; i++) {
        res = res * (n - i + 1) / i;
    }
    return res;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int m;
        string s;
        cin >> m >> s;
        int n =  s.size();
        int cnt = 1;
        int res = 0;
        for(int i = 0 ; i < n - 1 ; i++){
            for(int j = i + 1 ; j < n ; j ++){
                if(s[i] == s[j]){
                    cnt ++;
                }
                else {
                    res += C(cnt, 2);
                    cnt = 1; 
                }
            }
        }
        res += C(cnt, 2);
        cout << res << endl;
    }
}