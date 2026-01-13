#include<bits/stdc++.h>
using namespace std;
void ch(string &s){
    if(s[1] == '/') s = "0" + s;
    if(s[4] == '/') s.insert(3 , "0");
}
class KhachHang {
    private:
        string mkh, ten , gt , ns, dc;
    public:
        friend class hd;
        static int id;
        friend istream& operator >> (istream &in , KhachHang &a){
            string s = to_string(id);
            string mkh = "KH" + string( 3 - s.size() , '0') + s;
            id++;
            getline(in , a.ten);
            getline(in , a.gt);
            getline(in , a.ns);
            getline(in , a.dc);
            ch(a.ns);
        }
};
int KhachHang::id = 1;
class MatHang {
    private:
        string mamh, tenhang , dvi , gm , gb;
    public:
        static int cnt;
        friend class hd;
        friend istream& operator >> (istream &in , MatHang &a){
            string s = to_string(cnt);
            string mamh = "MH" + string( 3 - s.size() , '0') + s;
            cnt++;
            getline(in , a.tenhang);
            getline(in , a.dvi);
            getline(in , a.gm);
            getline(in , a.gb);
        }
};
int MatHang::cnt = 1;
class HoaDon {
    private:
        string mahd,mkh, mamh, soluong;
    public:
        static int hd;
        friend istream &operator >> (istream &in , HoaDon &a){
            string s = to_string(hd);
            string mahd = "HD" + string( 3 - s.size() , '0') + s;
            hd++;
            in >> a.mkh >> a.mamh >> a.soluong;
            return in;
        }
        friend ostream &operator << (ostream &out , HoaDon &a){
            out << a.mahd << " " << a
        }
};
int HoaDon::hd = 1;
int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];
    
    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}
