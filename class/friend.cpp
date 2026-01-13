#include<bits/stdc++.h>
//cout : ostream
//cin : istream
using namespace std;
class SV {
    private:
        string ten, tuoi , ns;
        double gpa;
        string msv;
    public:
        SV();
        void nhap();
        void in();
        friend void inth(SV);
        static int id;
        friend istream& operator >> (istream &in, SV& a);
        friend ostream& operator << (ostream &out, SV& a);
        friend bool operator < (SV a , SV b);
};

int SV:: id = 0;
bool operator < (SV a , SV b){
    return a.gpa < b.gpa;
}
SV::SV(){
    this->ten = "";
    this->tuoi = "";
    this->ns = "";
    this->gpa = 0.0;
}
istream& operator >>(istream &in , SV &a){
    ++a.id;
    a.msv = "sv" + string( 3 - to_string(a.id).size() , '0')  + to_string(a.id); 
    getline(in , a.ten);
    getline(in ,a.tuoi);
    getline(in ,a.ns);
    in >> a.gpa;
    cin.ignore();
    return in;
}
// void SV::nhap(){
//     ++id;
//     msv = "sv" + string( 3 - to_string(id).size() , '0')  + to_string(id); 
//     getline(cin , ten);
//     getline(cin ,tuoi);
//     getline(cin ,ns);
//     cin >> this->gpa;
//     cin.ignore();
// }
// void inth(SV a){
//     cout << a.msv << " " << a.ten ;
// }
// void SV::in(){
//     cout << this-> tuoi << " " << this->ns << " " << this->gpa << endl;
// }
ostream &operator << (ostream& out , SV &a){
    out << a.msv << " " << a.ten << " " << a.tuoi << " " << a.ns << " " << a.gpa << endl;
    return out;
}
int main(){
    SV a[100];
    int n; cin >> n;
    cin.ignore();
    for(int i = 0 ; i < n ; i ++) {
        cin >> a[i];
    }
    sort( a , a + n);
    for(int i = 0 ; i < n ; i++){
        cout << a[i];
    }

}

