#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int  main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        int n;
        string a;
        cin >> n >> a;
        string x = "";
        for( auto h : a){
            if( h == '1' || h == '0') continue;
            else if ( h == '2') x += "2";
            else if ( h == '3') x += "3";
            else if ( h == '4') x += "322";
            else if ( h == '5') x += "5";
            else if ( h == '6') x += "35";
            else if ( h == '7') x += "7";
            else if ( h == '8') x += "7222";
            else if ( h == '9') x += "7332";
        }
        sort(x.begin() , x.end() , greater<char>());
        for( auto k : x) cout << k;
        cout << endl;
    }
}