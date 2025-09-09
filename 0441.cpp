#include<iostream>
#include<vector>
using namespace std;
using ll = long long;
int main(){
    int t; cin >> t;
    while(t--){
        int n , y; cin >> n >> y;
        vector <int> v;
        for(int i = 0 ; i < n ; i++){
            int x ; cin >> x;
            v.push_back(x);
        }
        bool check = false;
        for(int i = 0 ; i < n ; i++){
            if(v[i] == y){
                check = true;
                cout << i + 1 << endl;
                break;
            }
        }
        if(!check) cout << -1 << endl;
    }

}