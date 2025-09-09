#include<iostream>
#include<set>
#include<map>
#include<string>
#include<sstream>
using namespace std;
using ll = long long;
int main(){
    int n;
    cin >> n;
    cin.ignore();
    map < string , int > str;
    for (int i = 0 ; i < n ; i ++){
        string s ;
        getline(cin , s);
        str[s] ++;
    }
    for (auto x : str){
        if(x.second == 1) cout << x.first << endl;
        else cout << x.first << (x.second - 1) << endl;
    }
}
