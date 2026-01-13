#include<bits/stdc++.h>
using namespace std;
void xuly( string s){
    for(auto x : s){
        x = tolower(x);
    }
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        vector<string> ema;
        string tu;
        map <string , int > mp;
        string s;
        getline(cin , s);
        stringstream ss (s);
        while( ss >> tu){
            xuly(tu);
            mp[tu] ++;
        }
        for(auto x : mp){
            
        }
    }
}