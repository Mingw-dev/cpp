#include<bits/stdc++.h>
using namespace std;

struct mathang {
    string mh , tenmh , nhomhang;
    double gm , gb;
};

void nhap(mathang a[] , int n){
    cin.ignore();
    for(int i = 0 ; i < n ; i ++){
        a[i].mh = to_string(i + 1); // gán mã hàng
        getline(cin , a[i].tenmh);
        getline(cin , a[i].nhomhang);
        cin >> a[i].gm >> a[i].gb;
        cin.ignore();
    }
}

void in(mathang a[] , int n){
    for(int i = 0 ; i < n ; i ++){
        cout << a[i].mh << " " << a[i].tenmh << " " << a[i].nhomhang << " ";
        cout << fixed << setprecision(2) << a[i].gb - a[i].gm << endl; 
    }
}

bool cmp(mathang a , mathang b){
    return (a.gb - a.gm) > (b.gb - b.gm);
}

int main(){
    int n;
    cin >> n;
    mathang ds[n];
    nhap(ds , n);
    sort(ds , ds + n , cmp);
    in(ds , n);
    return 0;
}
