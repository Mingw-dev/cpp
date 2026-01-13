#include<bits/stdc++.h>
using namespace std;
class NhanVien {
    private:
        string ht , gt , ns;
        string dc , mst;
        string hd;
    public:
        friend istream &operator >> (istream &in , NhanVien &a);
        friend ostream &operator >> (ostream & out , const NhanVien &a);

};
istream &operator >> (istream &in , NhanVien &a){
    getline(in , a.ht);
    getline(in , a.gt);
    getline(in , a.ns);
    getline(in , a.dc);
    getline(in , a.mst);
    getline(in , a.hd);
    if(a.ns[1] == '/') a.ns = "0" + a.ns;
    if(a.ns[4] == '/') a.ns.insert( 3 , "0");
    if(a.hd[1] == '/') a.hd = "0" + a.hd;
    if(a.hd[4] == '/') a.hd.insert(3 , "0");
    return in;
}
ostream &operator >> (ostream & out , const NhanVien &a){
    out << "00001" << " ";
    out << a.ht << " " << a.gt << " " << a.ns << " ";
    out << a.dc << " " << a.mst << " " ;
    out << a.hd ;
    return out;
}
int main(){
    NhanVien a;
    cin >> a;
    cout >> a;
    return 0;
}