#include<iostream> 
#include<vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t -- ){
        int n , k; cin >> n >> k;
        vector <int> a;
        for(int i = 0 ; i < n ; i ++){
            int x; cin >> x;
            a.push_back(x);
        }
        vector <int> prefix (n + 1 , 0);
        for(int i = 1 ; i <= n ; i++){
            prefix[i] = prefix[i-1] + a[i-1];
        }
        while(k -- ){
            int l , r; cin >> l >> r;
            cout << prefix[r] - prefix[l - 1] << endl;
        }
    }
}