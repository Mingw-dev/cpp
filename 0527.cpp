#include<bits/stdc++.h>
using namespace std;
class mytime {
    private:
        int gio , phut , giay;
    public:
        void nhap();
        void in();
        friend bool cmp(const mytime& ,const mytime&);
};
void mytime::nhap(){
    cin >> gio >> phut >> giay;
}
void mytime::in(){
    cout << gio << " " << phut << " " << giay;
}
bool cmp(const mytime &a ,const mytime &b){
    if(a.gio != b.gio) return a.gio < b.gio;
    if(a.phut != b.phut) return a.phut < b.phut;
    else return a.giay < b.giay;
}
int main(){
    int n;
    cin >> n;
    mytime a[n];
    for(int i = 0 ; i < n ; i ++){
        a[i].nhap();
    }
    sort(a , a + n , cmp);
    for( int i = 0 ; i < n ; i++) {
        a[i].in();
        cout << "\n";
    }

}