    #include<bits/stdc++.h>
    using namespace std;
    class SinhVien {
        private:
            string msv, ht , lop;
            string email;
            int id;
        public:
            string dn;
            friend void nhap(SinhVien a[] , int n);
            void in();
            friend bool cmp(const SinhVien& ,const SinhVien&);
        
    };

    void nhap(SinhVien a[] , int n){
        for(int i = 0 ; i < n ; i++){
            a[i].id = i + 1;
            getline(cin , a[i].msv);
            getline(cin , a[i].ht);
            getline(cin , a[i].lop);
            getline(cin , a[i].email);
            getline(cin , a[i].dn);
        
        }
    }
    void SinhVien::in(){
        cout << id << " " << msv << " " << ht << " " <<  lop << " " << email << " " << dn << endl; 
    }
    bool cmp(const SinhVien &a , const SinhVien &b){
        return a.id < b.id;
    }
    int main(){
        int n;
        cin >> n;
        cin.ignore();
        SinhVien a[n];
        nhap(a , n);
        sort(a , a + n , cmp);
        int t;
        cin >> t;
        cin.ignore();
        while(t--){
            string s;
            getline(cin , s);
            for(int i = 0 ; i < n ; i ++){
                if(a[i].dn == s) {
                    a[i].in();
                }
            }
        }

    }