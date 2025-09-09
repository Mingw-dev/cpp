#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n , k; cin >> n >> k;
        vector < int >  a;
        for(int i = 0 ; i < n ; i++){
            int x; cin >> x;
            a.push_back(x);
        }
        sort(a.begin() , a.end());
        cout << a[k - 1] << endl;
    }
}