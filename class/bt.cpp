#include<bits/stdc++.h>
using namespace std;
class SinhVien{
    private:
        string msv , ht , lop, ns;
        float gpa;
    public:
        friend istream& operator >> (istream &in, SinhVien& a);
        friend ostream& operator << (ostream &out, SinhVien& a);
        static int id;
};
int SinhVien::id = 0;
istream &operator >> (istream &in , SinhVien &a){
    ++a.id;
    a.msv = "B20DCCN" + string (3 - to_string(a.id).size() , '0') + to_string(a.id);
    cin.ignore();
    getline(in , a.ht);
    getline(in , a.lop);
    getline(in , a.ns);
	if(a.ns[1] == '/') a.ns = "0" + a.ns;
	if(a.ns[4] == '/') a.ns.insert(3 , "0"); 
    in >> a.gpa;
    //cin.ignore();
    return in;
}
ostream &operator << (ostream &out , SinhVien &a){
    out << a.msv << " " << a.ht << " " << a.lop << " " << a.ns << " " << fixed << setprecision (2) << a.gpa << endl;
    return out;
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}