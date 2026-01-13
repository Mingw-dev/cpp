#include<bits/stdc++.h>
using namespace std;
struct ds {
    string ht , ns;
};
bool cmp(ds a, ds b){
    int n1 = (a.ns[0] - '0') * 10 + a.ns[1] - '0';
    int t1 = (a.ns[3] - '0') * 10 + a.ns[4] - '0';
    int na1 = stoi(a.ns.substr(6));
    int n2 = (b.ns[0] - '0') * 10 + b.ns[1] - '0';
    int t2 = (b.ns[3] - '0') * 10 + b.ns[4] - '0';
    int na2 = stoi(b.ns.substr(6));
    if(na1 != na2) return na1 < na2;
    if(t1 != t2) return t1 < t2;
    else return n1 < n2;
}
int main(){
    int n;
    cin >> n;
    cin.ignore();
    ds a[n];
    for(int i = 0 ; i < n ; i ++){
        cin >> a[i].ht >> a[i].ns;
    }
    sort(a, a + n , cmp);
    cout << a[n - 1].ht << "\n" << a[0].ht;
}
