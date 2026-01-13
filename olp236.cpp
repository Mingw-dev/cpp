#include<bits/stdc++.h>
using namespace std;
const int Max = 1000000;
int prefix[Max];
bool check(int &a){
    int cnt = 0;
    string s = to_string(a);
    int l = 0 , r = s.size() - 1;
    while(l <= r){
        if(s[l] != s[r]) cnt ++;
        l++ ; r--;
    }
    return cnt <= 1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int l , r;
        cin >> l >> r;
        memset(prefix , 0 , sizeof(prefix));
        for(int i = 1 ; i <= Max ; i++){
            prefix[i] = prefix[i - 1];
            if(check(i)){
                prefix[i] ++;
            }
        }
        cout << prefix[r] - prefix[l - 1] << endl;
    }
}