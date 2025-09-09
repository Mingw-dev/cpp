#include <iostream>
#include <string>
#include <algorithm>
#include<cmath>
#include<sstream>
#include<vector>
using namespace std;
void ch(string &s){
    int len = s.size();
    s[0] = toupper(s[0]);
    for(int i = 1 ; i < len ; i++)
    s[i] = tolower(s[i]);
}
int main(){
    string s;
    getline(cin,s);
    string word;
    stringstream ss (s);
    vector<string> v;
    while ( ss >> word){
        transform( word.begin() , word.end() , word.begin() , ::tolower);
        v.push_back(word);
    }
    for( int i = 0 ; i < v.size() - 1 ; i++ ){
        ch(v[i]);
        cout << v[i];
        if( i != v.size() - 2) cout << " ";
    }
    cout << ", ";
    string &last = v.back();
    transform( last.begin() , last.end() , last.begin() , :: toupper);
    cout << last << endl;
}
