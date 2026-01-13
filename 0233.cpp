#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n , m ;
        cin >> n >> m;
        vector< vector<int> > a(n , vector<int> (m));
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++)
            cin >> a[i][j];
        }
        vector<int> b;
        int cot1 = 0 , cot2 = m - 1 , hang1 = 0 , hang2 = n - 1;
        while(cot1 <= cot2 && hang1 <= hang2){
            for(int i = cot1 ; i <= cot2 ; i++) {
                b.push_back(a[hang1][i]);
            }
            hang1 ++;
            for(int i = hang1 ; i <= hang2 ; i++ ) b.push_back(a[i][cot2]);
            cot2 --;
            if(hang1 <= hang2) {
                for(int i = cot2 ; i >= cot1 ; i--){
                    b.push_back(a[hang2][i]);
                }
                hang2 --;
            }
            if(cot1 <= cot2){
                for(int i = hang2 ; i >= hang1 ; i--){
                    b.push_back(a[i][cot1]);
                }
                cot1++;
            }
        }
        reverse(b.begin() , b.end());
        for(auto x : b) cout << x << " ";
        cout << endl;
    }
}