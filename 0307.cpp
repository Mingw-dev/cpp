#include<bits/stdc++.h>
using namespace std;
void solve(string a , string b){
    set <string> se1;
    set <string> se2;
    stringstream ss1 (a);
    stringstream ss2 (b);
    string word;
    while( ss1 >> word) se1.insert(word);
    while( ss2 >> word) se2.insert(word);
    for (auto &s : se1){
        if( se2.find(s) == se2.end()) cout << s << " "; 
    } 
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string a , b;
        getline(cin , a);
        getline(cin , b);
        solve(a , b);
        cout << "\n";
    }
}