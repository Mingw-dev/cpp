#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll gcd(ll a, ll b){
    if( b == 0) return a;
    else return gcd(b , a % b);
}
ll lcd(ll a , ll b){
    return a / gcd(a , b) * b;
}
class PhanSo {
    public:
        ll tu , mau;
        friend PhanSo operator + (PhanSo , PhanSo);
        void rutgon();
        friend void process(PhanSo , PhanSo);
        friend ostream &operator << (ostream & , PhanSo);
        friend PhanSo operator * (PhanSo , PhanSo);

};
ostream &operator << (ostream &out , PhanSo a){
    out << a.tu << "/" << a.mau ;
    return out;
}
PhanSo operator * (PhanSo a, PhanSo b){
    PhanSo moi;
    moi.tu = a.tu * b.tu;
    moi.mau = a.mau * b.mau;
    moi.rutgon();
    return moi; 
}
void PhanSo::rutgon(){
    ll m = gcd( tu , mau);
    tu = tu / m;
    mau = mau / m;
}
PhanSo operator + (PhanSo a , PhanSo b){
    PhanSo c;
    ll mc = lcd(a.mau , b.mau);
    c.tu = mc / a.mau * a.tu + mc / b.mau * b.tu;
    c.mau = mc;
    ll g = gcd(c.tu , c.mau);
    c.tu /= g ; c.mau /= g;
    return c;
}
void process(PhanSo a , PhanSo b){
    PhanSo c = a + b;
    PhanSo d = a * b * c * c;
    cout << c * c << " " << d << endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}