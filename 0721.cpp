#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n) , lis( n , 1);
        for(int &i : a) cin >> i;
        int res = -1;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < i ; j++){
                if(a[j] < a[i]) {
                    lis[i] = max(lis[i] , lis[j] + 1);
                }
            }
            res = max(res , lis[i]);
        }
        cout << res << endl;    
    }
}