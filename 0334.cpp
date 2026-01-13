#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin , s);
        ll tong = 0;
        ll so = 0;
        for(char x : s){
            if(isdigit(x)){
                tong += x - '0';
                //s.erase(x);
            }
        }
        string chu = "";
        for(auto x : s){
            if(!isdigit(x)) chu += x;
        }
        sort(chu.begin() , chu.end());

        chu = chu + to_string(tong);
        cout << chu << endl;
    }
}