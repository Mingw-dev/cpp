#include<bits/stdc++.h>
using namespace std;
struct thuctap {
    string mdn , ten;
    int cnt;
};
bool cmp(const thuctap &a , const thuctap &b){
    if(a.cnt != b.cnt)
        return a.cnt > b.cnt;
    else return a.mdn < b.mdn;
}
int main(){
    int n;
    cin >> n;
    cin.ignore();
    thuctap a[n];
    for(int i = 0 ; i < n ; i ++){
        getline(cin , a[i].mdn);
        getline(cin , a[i].ten);
        cin >> a[i].cnt;
        cin.ignore();
    }
    sort(a , a + n, cmp);
    // for(int i = 0 ; i < n ; i++){
    //     cout << a[i].mdn << " " << a[i].ten << " " << a[i].cnt << "\n";
    // }
    int t;
    cin >> t;
    while(t--){
        int l , r;
        cin >> l >> r;
        cin.ignore();
        vector<thuctap> b;
        for(auto x : a){
            if(x.cnt <= r && x.cnt >= l) b.push_back(x);
        }
        cout << "DANH SACH DOANH NGHIEP NHAN TU " << n << " DEN "  << r << " SINH VIEN:\n" ;
        for(auto x : b){
            cout << x.mdn << " " << x.ten << " " << x.cnt << "\n";
        }
    }
}