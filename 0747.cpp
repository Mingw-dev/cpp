#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = (int) s.size();
        int res = 0;
        for(int i = 0 ; i < n ; ){
            int le = 0 , chan = 0;
            if(s[i] == '1'){
                int j = i;
                while( j < n && s[j] == '1') {
                    le ++; j ++;
                }
                while( j < n && s[j] == '0') {
                    chan ++ ; j ++;
                }
                int x = min(le , chan / 2);
                res = max(x * 3 , res);
                i = j;
            }
            else i++;
        }
        cout << res << endl;
    }
}