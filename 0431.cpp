#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n , k;
        cin >> n >> k;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        sort(a.begin() , a.end());
        int j = 0, cnt = 0;
        for(int i = 0 ; i < n ; i++){
            while(j < n && a[j] - a[i] < k){
                j++;
            }
            cnt += j - i - 1;
        }
        cout << cnt << "\n";
    }
}