#include<bits/stdc++.h>
using namespace std;
int x , y , d;
void euclid_extended(int a, int b){
    if(b == 0) {
        x = 1;
        y = 0;
        d = a;
    }
    else {
        euclid_extended( b , a % b);
        int tmp = x;
        x = y;
        y = tmp - (a / b) * y;
    }
}
int dao_modun(int a , int m){
    euclid_extended(a , m);
    if(d != 1) return -1;
    else return (x % m + m) % m;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int a , b;
        cin >> a >> b;
        cout << x << " " << y << " " << dao_modun(a , b) << "\n";
    }
}