#include<bits/stdc++.h>
using namespace std;
bool check(vector <int> &v , int l , int r){
    auto it = max_element(v.begin() + l, v.begin() + r + 1);
    int idx = it - v.begin();
    for(int i = l ; i < idx ; i ++){
        if(v[i] > v[i + 1]) return false;
    }
    for(int i = idx ; i < r ; i++){
        if(v[i] < v[i + 1]) return false;
    }
    return true;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for( auto &x : a) cin >> x;
        int l , r;
        cin >> l >> r;
        if(check(a , l , r)) cout << "Yes\n";
        else cout << "No\n";
    }
}