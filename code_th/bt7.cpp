#include<bits/stdc++.h>
using namespace std;
struct sv {
    string msv;
    string ht, lp;
    float d1 , d2 ,d3;
};
bool cmp( sv& a, sv &b){
    return a.ht < b.ht;
}
int main(){
    int n;
    cin >> n;
    sv a[n];
    cin.ignore();
    for(int i = 0 ; i < n ; i ++){
        cin >> a[i].msv;
        cin.ignore();
        getline(cin , a[i].ht);
        cin >> a[i].lp >> a[i].d1 >> a[i].d2 >> a[i].d3;
    }
    sort(a , a + n , cmp);
    for(int i = 0 ; i < n ; i++){
        cout << i + 1 << " " << a[i].msv << " " <<a[i].ht << " " << a[i].lp << " ";
        cout << fixed << setprecision(1) << a[i].d1 << " " << a[i].d2 << " " << a[i].d3;
        cout << "\n";
    }
}
