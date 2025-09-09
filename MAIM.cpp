#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        int n , k;
        cin >> n >> k;
        vector <int> a(n);
        for(int i = 0 ; i < n ; i ++) cin >> a[i];
        map <int , int > b;
        int cnt = 0;
        for( auto x : a){
            int need = k - x;
            if( b.find(need) != b.end()) cnt += b[need] ;
            b[x] ++;
        }
        cout << cnt << "\n";
    }
}