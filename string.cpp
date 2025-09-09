#include<iostream>
#include<string>
using namespace std;
int main(){
    int n; cin >> n;
    cin.ignore(1);
    string s;
    //cin >> s;
    getline(cin , s);
    // length
    cout << s.length() << endl;
    cout << s.size() << endl;
    //cout << s[0] << endl;
    for(int i = 0 ; i < s.length() ; i++)
    cout << s[i] << " ";
    cout << endl;
    for( char x : s) cout << x << " ";
    cout << endl;
    for( auto x : s) cout << x << " ";
}