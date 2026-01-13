#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<vector<int> > a( n , vector <int> (n));
        int tong = 0 ;
        vector<int> cot( n , 0) , hang( n , 0);
        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < n ; j++) {
                cin >> a[i][j];
                tong += a[i][j];
                hang[i] += a[i][j];
                cot[j] += a[i][j];
            }
        }
        int cotm = *max_element(cot.begin() , cot.end());
        int hangm = *max_element(hang.begin() , hang.end());
        int target = max(cotm , hangm);
        int kq = n * target - tong;
        cout << kq << endl;

    }
}