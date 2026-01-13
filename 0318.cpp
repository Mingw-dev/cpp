#include<bits/stdc++.h>
using namespace std;
bool sodep( string s){
    string so;
    for( auto x : s) {
        if(isdigit(x)) so.push_back(x);
    }
    string kq = so.substr( so.size() - 5);
    vector <int> a;
    for( auto x : kq ) a.push_back(x - '0');
    int check1 = true;
    for(int i = 0 ; i < 4 ; i++){
        if(a[i] >= a[i+1]) {
            check1 = false;
            break;
        }
    }
    if(check1) return true;
    if(count(a.begin() , a.end() , a[0]) == 5) return true;
    if( a[0] == a[1] && a[1] == a[2] && a[3] == a[4]) return true;
    int check2 = true;
    for( auto x : a){
        if( x != 6 && x != 8) {
            check2 = false;
            break;
        }
    }
    if(check2) return true;
    else return false;
}
int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin , s);
        cout << (sodep(s) ? "YES\n" : "NO\n");
    }
}