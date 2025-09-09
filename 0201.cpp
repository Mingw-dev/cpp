#include<iostream>
#include<set>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin >> t;
    while(t--){
        ios
        int n; cin >> n;
        set <int> se;
        for(int i = 0 ; i < n ; i++){
            int x ; cin >> x;
            se.insert(x);
        }
        int ans = 1;
        for(int i = 1 ; i < n + 1; i ++){
            if(se.find(i) == se.end()){
                ans = i;
                break;
            }
        }
        cout << ans << endl;
    }
}