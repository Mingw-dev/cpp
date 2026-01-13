#include<bits/stdc++.h>
using namespace std;
using ll = long long;
class SinhVien {
    private:
    string ht , lop , ns ;
    float gpa;
    public:
    SinhVien(){
        ht = "";
        lop = "";
        ns = "";
        gpa = 0;
    }
    void nhap(){
        getline(cin , ht);
        getline(cin , lop);
        getline(cin , ns);
        cin >> gpa;
        if(ns[1] == '/') ns = "0" + ns;
        if(ns[4] == '/') ns.insert(3 , "0");
    }
    void xuat(){
        cout << "B20DCCN001" << " " << ht << " " << lop << " " << ns << " " << fixed << setprecision(2) << gpa << endl;
    }
};
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
} 