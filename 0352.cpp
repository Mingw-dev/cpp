#include<bits/stdc++.h>
using namespace std;
void chuanhoa(string &s){
    for(auto &x : s) x = tolower(x);
}
int main(){
    int t;
    cin >> t;
    unordered_map <string , int> mp;
    cin.ignore();
    while(t--){
        string s;
        getline(cin , s);
        string email = "";
        stringstream ss (s);
        string tu;
        vector<string> tmp;
        while(ss >> tu){
            chuanhoa(tu);
            tmp.push_back(tu);
        }
        email += tmp[tmp.size() - 1];
        for(int i = 0 ; i < tmp.size() - 1 ; i++){
            email += tmp[i][0];
        }
        int cnt = mp[email] ++;
        if(cnt > 0) email += to_string(cnt + 1);
        email += "@ptit.edu.vn";
        cout << email << endl;
    }
}