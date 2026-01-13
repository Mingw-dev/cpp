#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n , x;
        cin >> n >> x;
        vector<int> a(n);
        for(auto &k : a) cin >> k;
        int check = false;
        unordered_set<int> b;
        for(int i = 0 ; i < n ; i++){
            if(b.count(a[i] - x)){
                check = true;
                cout << "1\n";
                break;
            }
            b.insert(a[i]);
        }
        if(!check) cout << "-1\n";
    }
}