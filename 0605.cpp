#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll uc(const ll a , const ll b){
    if(b == 0) return a;
    else return uc( b , a % b);
}
class PhanSo{
    private:
        ll tu , mau;
    public:
        PhanSo( ll tu , ll ma);
        friend istream &operator >> ( istream &in , PhanSo &a);
        friend ostream &operator << (ostream &out , PhanSo &a);
        void rutgon();
};
PhanSo::PhanSo(ll tu = 1, ll mau = 1){
    this->tu = tu;
    this->mau = mau;
}
istream &operator >> (istream &in , PhanSo &a){
    in >> a.tu >> a.mau;
    return in;
}
void PhanSo::rutgon(){
    ll m = uc(tu , mau);
    tu = tu / m;
    mau = mau / m;
}
ostream &operator << (ostream &out , PhanSo &a){
    out << a.tu << "/" << a.mau << endl;
    return out;
}
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}