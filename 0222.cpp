#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n][n];
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++)
                cin >> a[i][j];
        }
        map<int , int> mp;
        int cmt = 0;
        for(int i = 0 ; i < n ; i++){
            set<int> se;
            for(int j = 0 ; j < n ; j++)
                se.insert(a[i][j]);
            for(auto x : se)
                mp[x] ++;
        }
        for(auto &x : mp){
            if(x.second == n) cmt ++;
        }
        cout << cmt << endl;
    }
}