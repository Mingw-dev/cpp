#include<bits/stdc++.h>
using namespace std;
void solve(string &a , string &b){
    int n1 = a.size() , n2 = b.size();
    reverse(a.begin() , a.end());
    reverse(b.begin() , b.end());
    vector<int> x(n1), y(n1 , 0);
    for(int i = 0 ; i < n1 ; i++) x[i] = a[i] - '0';
    for(int i = 0 ; i < n2 ; i++) y[i] = b[i] - '0';
    vector<int> z;
    int tmp = 0;
    for(int i = 0 ; i < n1 ; i++){
        int res = x[i] + y[i] + tmp;
        z.push_back(res % 10);
        tmp = res / 10;
    }
    if(tmp > 0) z.push_back(tmp);
    reverse(z.begin() , z.end());
    for(auto x : z) cout << x ;
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string a, b;
        cin >> a >> b;
        if(a.size() >= b.size()) solve(a , b);
        else solve(b , a);
        cout << "\n";

    }
}