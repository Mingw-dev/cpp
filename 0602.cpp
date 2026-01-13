#include<bits/stdc++.h>
using namespace std;
class SinhVien{
    private:
        string msv , ht , lop , ns;
        float gpa;
    public:
        SinhVien();
        friend istream& operator >> ( istream &in , SinhVien &a);
        friend ostream& operator << ( ostream &out , SinhVien &a);   
};
SinhVien::SinhVien(){
    this->msv = "B20DCCN001";
    this->ht = "";
    this->lop = "";
    this->ns = "";
    this->gpa = 0.0;
}
istream& operator >> (istream &in , SinhVien &a){
    getline(in , a.ht);
    getline(in , a.lop);
    getline(in , a.ns);
    if(a.ns[1] == '/') a.ns = "0" + a.ns;
    if(a.ns[4] == '/') a.ns.insert(3 , "0");
    in >> a.gpa;
    return in;
}
ostream& operator << (ostream &out , SinhVien &a){
    out << a.msv << " " << a.ht << " " << a.lop << " ";
    out << a.ns << " " << fixed << setprecision(2) << a.gpa << endl;  
    return out;
}
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}