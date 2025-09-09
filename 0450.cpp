#include<iostream>
#include<map>
#include<set>
#include<vector>
using namespace std;
int main(){
    int t;
    cin  >> t;
    while(t --){
        int n;
        cin >> n;
        bool check = false;
        vector<int> a(n);
        map<int , int> b;
        for(int i = 0 ; i < n ; i++) cin >> a[i];
        for(auto x : a){
            if(b[x]) {
                cout << x << endl;
                check = true;
                break;
            }
            b[x]++;
        }
        if(!check) cout << -1 << "\n";
    }
}