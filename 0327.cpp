// rem mới=(rem×2+b)mod5
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin , s);
        int rem = 0;
        for(int i = 0 ; i < s.size() ; i++){
            rem = (rem * 2 + (s[i] - '0')) % 5;
        }
        if(rem == 0) cout << "Yes\n";
        else cout << "No\n";
    }
}