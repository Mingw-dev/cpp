#include<bits/stdc++.h>
using namespace std;
void solve(string &a , string &b){
    int n1 = a.size();
    int n2 = b.size();
    reverse(a.begin() , a.end());
    reverse(b.begin() , b.end());
    vector<int> x(n1) , y(n1 , 0);
    for(int i = 0 ; i < n1 ; i++) x[i] = a[i] - '0';
    for(int i = 0 ; i < n2 ; i++) y[i] = b[i] - '0';
    vector<int> z;
    int tmp = 0;
    for(int i = 0 ; i < n1 ; i++){
        int res = x[i] - y[i] - tmp;
        if(res < 0){
            res += 10;
            tmp = 1;
        }
        else tmp = 0;
        z.push_back(res);
    }
    reverse(z.begin() , z.end());
    for(auto x : z) cout << x;
    cout << "\n";
} 
int main(){
    int t;
    cin >> t;
    while(t--){
        string a , b;
        cin >> a >> b;
        if(a.size() > b.size() || (a.size() == b.size() && a >= b)) solve(a , b);
        else solve(b , a);
    }
}