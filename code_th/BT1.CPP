#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll gcd( ll a , ll b){
    if(b == 0) return a;
    return gcd(b , a % b);
}
class PhanSo{
    private:
        ll tu , mau;
    public:
        PhanSo(ll tu , ll mau){
            this->tu = tu;
            this->mau = mau;
        }
        friend istream &operator >> (istream& in , PhanSo& a){
            cin >> a.tu >> a.mau;
            return in;
        }
        friend ostream &operator << (ostream& out, PhanSo a){
            cout << a.tu << "/" << a.mau;
            return out;
        }
        void rutgon(){
            ll uc = gcd(tu , mau);
            tu /= uc;
            mau /= uc;
        }
        friend PhanSo operator + (PhanSo a , PhanSo b){
            PhanSo kq(1, 1);
            kq.tu = a.tu * b.mau + b.tu * a.mau;
            kq.mau = a.mau * b.mau;
            kq.rutgon();
            return kq;
        }
};
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}