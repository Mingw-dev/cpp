#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> a;
vector< vector<int> > res;
void ql(int i , int sum) {
    if(sum == n) {
        //sort(a.begin() , a.end() , greater<int> ());
        res.push_back(a);

        return;
    }
    for(int j = i ; j >= 1 ; j--) {
        if(j + sum <= n) {
            a.push_back(j);
            ql(j , sum + j);

            a.pop_back();
        }
    }
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> n;
        a.clear();
        res.clear();
        ql(n , 0);

        //sort(res[0].begin() , res[0].end() , greater<int>());
        for(int i = 0 ; i < res.size() ; i++) {
            cout << "(";
            for(int j = 0 ; j <  res[i].size() ; j++) {
                cout << res[i][j];
                if(j != res[i].size() - 1) cout << " ";
            }
            cout << ") ";
        }
        cout << endl;
    }
}