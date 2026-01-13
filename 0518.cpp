#include<bits/stdc++.h>
using namespace std;
struct NhanVien {
    string mnv, ht , gt , ns , dc , mst , hd;
};
int id = 1;
void chuanhoa(string &s){
    if(s[1] == '/') s = "0" + s;
    if(s[4] == '/') s.insert(3 , "0");
}
void nhap(NhanVien &a){
    static bool flag = true;// biến static chỉ tồn tại 1 lần
    if(flag){
        cin.ignore();
        flag = false;
    }
    string msv = to_string(id);
    a.mnv = string(5 - msv.size() , '0') + msv;
    ++id;
    getline(cin , a.ht);
    getline(cin , a.gt);
    getline(cin , a.ns);
    getline(cin , a.dc);
    getline(cin , a.mst);
    getline(cin , a.hd);
    chuanhoa(a.ns);
    chuanhoa(a.hd);
}
void inds(NhanVien a[] , int n){
    for(int i = 0 ; i < n ; i ++ ){
        cout << a[i].mnv << " " << a[i].ht << " ";
        cout << a[i].gt << " " << a[i].ns << " ";
        cout << a[i].dc << " " << a[i].mst << " ";
        cout << a[i].hd << endl;
    }
}
bool cmp(NhanVien a , NhanVien b){
    int n1 = (a.ns[0] - '0') * 10 + (a.ns[1] - '0');
    int t1 = (a.ns[3] - '0') * 10 + (a.ns[4] - '0');
    int na1 = stoi(a.ns.substr(6));
    int n2 = (b.ns[0] - '0') * 10 + (b.ns[1] - '0');
    int t2 = (b.ns[3] - '0') * 10 + (b.ns[4] - '0');
    int na2 = stoi(b.ns.substr(6));
    if(na1 != na2) return na1 < na2;
    if(t1 != t2) return t1 < t2;
    else return n1 < n2;
}
void sapxep(NhanVien a[] , int n){
    stable_sort(a , a + n , cmp);
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}