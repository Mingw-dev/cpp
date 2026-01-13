#include<bits/stdc++.h>
using namespace std;
void xl(string &s){
    s[0] = toupper(s[0]);
    for( int i = 1 ; i < s.size() ; i++)
        s[i] = tolower(s[i]);
}
void solve( string &s , int n){
    vector < string > a;
    if( n == 1){
        string word;
        stringstream ss (s);
        while( ss >> word){
            xl(word);
            a.push_back(word);
        }
        cout << a[a.size() - 1] << " ";
        for( int i = 0 ; i < a.size() - 1 ; i++) cout << a[i] << " ";
        cout << endl;
    }
    if( n == 2) {
        string wordd;
        stringstream sss (s);
        while( sss >> wordd){
            xl(wordd);
            a.push_back(wordd);
        }
        for(int i = 1 ; i < a.size() ; i++) cout << a[i] << " ";
        cout << a[0] << endl;
    }
}
int main(){
    int t;
    cin >> t;
    //cin.ignore();
    while(t--){
        int n;
        cin >> n;
        cin.ignore();
        string s;
        getline(cin , s);
        solve( s , n);
    }
}