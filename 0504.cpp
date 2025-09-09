#include<iostream>
#include<map>
#include<set>
#include<vector>
#include<algorithm>
#include<string>
#include<iomanip>
using namespace std;
using ll = long long;
struct SinhVien {
    string name , grade , bitrh;
    float gpa;
};
void nhap (SinhVien &a){
    getline(cin , a.name);
    getline(cin , a.grade);
    getline(cin , a.bitrh);
    cin >> a.gpa;
    if(a.bitrh[1] == '/') a.bitrh = "0" + a.bitrh;
    if(a.bitrh[4] == '/') a.bitrh.insert(3 , "0");
}
void in (SinhVien &a){
    cout << "B20DCCN001" << " " << a.name << " " << a.grade << " " << a.bitrh << " " << fixed << setprecision(2) << a.gpa << endl; 
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}