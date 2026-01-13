#include<bits/stdc++.h>
using namespace std;
void slove(){
    int n , m;
    cin >> n >> m;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    vector<bool> check (m + 1 , true);
    for(int i = 0 ; i < n ; i++){
        int tmp = a[i];
        for(int j = 2 ; j * j <= tmp ; j++){
            if(tmp % j == 0){
                for(int k = j ; k <= m ; k += j){
                    check[k] = false;
                }
                while(tmp % j == 0) tmp /= j;
            }
        }
        if(tmp > 1) {
            for(int k = tmp ; k <= m ; k+= tmp) check[k] = false;
        }
    }
    vector<int> freq;
    int res = 0;
    for(int i = 1 ; i <= m ; i++){
        if(check[i]) {
            freq.push_back(i);
            res ++;
        }
    }
    cout << res << endl;
    for(auto x : freq) cout << x << " ";
    cout << "\n";
}
int main(){
    slove();
}