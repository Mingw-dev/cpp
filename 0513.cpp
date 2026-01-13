#include<bits/stdc++.h>
using namespace std;
struct SinhVien {
    string msv, ht, lop , ns ;
    float gpa;  
};
void lower(string &s){
    for(int i = 1 ; i < s.size() ; i ++){
        s[i] = tolower(s[i]);
    }
    s[0] = toupper(s[0]);
}
void chuahoaten(string &s){
    stringstream ss (s);
    string tu;
    vector <string> ch;
    while(ss >> tu){
        lower(tu);
        ch.push_back(tu);
    }
    for(auto x : ch) cout << x << " ";
}
void chuanHoaNgay(string &s) {
    if (s[1] == '/') s = "0" + s;
    if (s[4] == '/') s.insert(3, "0");
}
void nhap( SinhVien ds[] , int n){
    cin.ignore();
    for(int i = 0 ; i < n ; i++){
        getline(cin , ds[i].ht);
        getline(cin , ds[i].lop);
        getline(cin , ds[i].ns);
        chuanHoaNgay(ds[i].ns);
        string id = to_string(i + 1);
        id = string(3 - id.size() , '0') + id; 
        ds[i].msv = "B20DCCN" + id;
        //chuahoaten(ds[i].ht);
        cin >> ds[i].gpa;
        cin.ignore();
    }
}
void in(SinhVien a[] , int n){
    for(int i = 0 ; i < n ; i ++){
        cout << a[i].msv << " " ;
        chuahoaten(a[i].ht);
        cout << a[i].lop << " " << a[i].ns << " ";
        cout << fixed << setprecision(2) << a[i].gpa << endl;
    }
}
bool cmp(SinhVien a , SinhVien b){
    return a.gpa > b.gpa;
}
void sapxep(SinhVien a[] , int n){
    sort(a , a + n , cmp);
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}