#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<vector<int>> a( n , vector<int> (n));
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j ++)
            cin >> a[i][j];
        }
        set<int> hang(a[0].begin() , a[0].end());
        for(int i = 1 ; i < n ; i ++){
            set<int> cot(a[i].begin() , a[i].end());
            set<int> temp;
            for(int x : hang){
                if(cot.count(x)) temp.insert(x);
            }
            hang = temp;
        }
        cout << hang.size() << endl;
    }
}