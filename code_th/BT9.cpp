#include<bits/stdc++.h>
using namespace std;
void solve(string a , string b){
    int n1 = a.size();
    int n2 = b.size();
    vector<int> x(n1) , y(n2 , 0);
    reverse(a.begin() , a.end());
    reverse(b.begin() , b.end());
    for(int i = 0 ; i < n1 ; i++) x[i] = a[i] - '0';
    for(int i = 0 ; i < n2 ; i++) y[i] = b[i] - '0';
    
    vector<int> z(n1);
    int tmp;
    for(int i = 0 ; i < n1 ; i++){
        int kq = x[i] - y[i] - tmp;
        if(kq < 0) {
            kq += 10;
            tmp = 1;
        }
        else tmp = 0;
        z[i] = kq;
    }
    reverse(z.begin() , z.end());
    for(auto x : z) cout << x << " ";
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string a , b;
        cin >> a >> b;
        if(a.size() > b.size() || (a.size() == b.size() && a > b))
            solve(a , b);
        else solve(b , a);
        cout << "\n";
    }
}