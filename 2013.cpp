#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int prime[1000001];
int n , p , m;
vector<int> a;
vector<int> res;
vector< vector<int> > path;
int dem = 0;
void sieve() {
    for(int i = 0 ; i < 1000001 ; i++) prime[i] = 1;
    prime[0] = prime[1] = 0;

    for(int i = 2 ; i * i < 1000001 ; i++) {
        if(prime[i]) {
            for(int j = i * i ; j < 1000001 ; j +=i) prime[j] = 0;
        }
    }
}
void ql(int i , int sum , int cnt) 
{
    if(sum == m && cnt == n) {
        dem ++;
        path.push_back(res);
    }

    for(int j = i ; j < a.size() ; j++) {
        if(sum + a[j] <= m) {
            res.push_back(a[j]);
            ql(j + 1 , sum + a[j] , cnt + 1);
            res.pop_back();
        }
    }
}
int main() {
    sieve();
    int t;
    cin >> t;
    while(t--) {
        
        cin >> n >> p >> m;
        a.clear();
        path.clear();
        res.clear();
        dem = 0;
        
        for(int i = p + 1 ;i <= m ; i++) {
            if(prime[i]) a.push_back(i);
        }
        
        ql(0 , 0 , 0);
        cout << dem << endl;

        for(int i = 0 ; i < path.size() ; i++) {
            for(auto j : path[i]) cout << j << " ";
            cout << "\n";
        }
       
    }
}