#include<bits/stdc++.h>
using namespace std;
int x;
bool cmp(pair<int, int> a , pair<int,int> b){
    int s1 = abs(x - a.first);
    int s2 = abs(x - b.first);
    if(s1 != s2) return s1 < s2;
    else return a.second < b.second;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n >> x;
        vector<pair<int,int>> a(n);
        for(int i = 0 ; i < n ; i++){
            cin >> a[i].first;
            a[i].second = i;
        }
        stable_sort(a.begin() , a.end() , cmp);
        for(auto &x : a) cout << x.first << " ";
        cout << "\n";

    }
}