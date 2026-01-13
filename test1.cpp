#include<bits/stdc++.h>
using namespace std;
using ll = long long;
string toMin(const string &a){
    string t = a;
    for(auto &x : t) {
        if(x == '6') x = '5';
    }
    return t;
}
string toMax(const string &a){
    string t = a;
    for(auto &x : t) {
        if(x == '5') x = '6';
    }
    return t;
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string a , b;
        cin >> a >> b;
        ll sumMin = stoll(toMin(a)) + stoll(toMin(b));
        ll sumMax = stoll(toMax(a)) + stoll(toMax(b));
        cout << sumMin << " " << sumMax << "\n";
    }
}