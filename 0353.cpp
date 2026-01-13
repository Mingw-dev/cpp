#include<bits/stdc++.h>
using namespace std;
bool solve( string s ){
    string kq = "";
    for(auto c : s){
        c = toupper(c);
        if( 'A' <= c && c <= 'C') kq += "2";
        if( 'D' <= c && c <= 'F') kq += "3"; 
        if (c >= 'G' && c <= 'I') kq += "4";
        if (c >= 'J' && c <= 'L') kq += "5";
        if (c >= 'M' && c <= 'O') kq += "6";
        if (c >= 'P' && c <= 'S') kq += "7"; 
        if (c >= 'T' && c <= 'V') kq += "8";
        if (c >= 'W' && c <= 'Z') kq += "9";
    }
    string nd = "";
    for(int i = kq.size() - 1 ; i >= 0 ; i --){
        nd += kq[i];
    }
    return nd == kq;
}
int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin , s);
        cout << (solve(s) ? "YES\n" : "NO\n");
    }
}