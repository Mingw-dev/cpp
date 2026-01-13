#include<bits/stdc++.h>
using namespace std;
void xl(string &s){
    for(int i = 1 ; i < s.size() ; i++){
        s[i] = tolower(s[i]);
    }
    s[0] = toupper(s[0]);
}
class SinhVien {
    private:
        string ht , lop , ns;
        float gpa;
    public:
        SinhVien();
        friend istream &operator >> (istream &in , SinhVien &a);
        friend ostream &operator << (ostream &out , SinhVien &a);
        void solve();
};
void SinhVien::solve(){
    stringstream ss (ht);
    string tu;
    vector <string> a;
    while( ss >> tu){
        xl(tu);
        a.push_back(tu);
    }
    for(auto x : a) cout << x << " ";
}
SinhVien::SinhVien(){
    this-> ht = "";
    this->lop = "";
    this->ns = "";
    this-> gpa = 0.0;
}
istream &operator >> (istream &in , SinhVien &a){
    getline(in , a.ht);
    getline(in , a.lop);
    getline(in , a.ns);
    if(a.ns[1] == '/') a.ns = "0" + a.ns;
    if(a.ns[4] == '/') a.ns.insert( 3 , "0");
    in >> a.gpa;
    in.ignore();
    return in;
}
ostream &operator << (ostream &out , SinhVien &a){
    out << "B20DCCN001" << " " ;
    a.solve();
    out << a.lop << " ";
    out << a.ns << " " << fixed << setprecision(2) << a.gpa;
    return out;
}

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}