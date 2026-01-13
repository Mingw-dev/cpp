#include<bits/stdc++.h>
using namespace std;
//muốn lấy thuộc tính thì dùng hàm get
//muốn thay đổi thuộc tính thì dùng set
//static: dùng chung dữ liệu cho các đối tượng cùng object
//friend fuction
class sinhvien{
    private :
        string ten , tuoi , namsinh ;
        float gpa;
        //static int dem;
        string msv;
        static int id;
    public :
        sinhvien();
        void in();
        void nhap();
        float getgpa();
        void setgpa(float diemgpa);
};
int sinhvien::id = 0;
sinhvien::sinhvien(){
   this->ten = "";
   this->tuoi = "";
   this ->namsinh = "";
   this ->gpa = 0.0;
}
void sinhvien::setgpa(float diemgpa){ // gán gpa = 1 biến tên là diemgpa
    this->gpa = diemgpa;              
}
void sinhvien::nhap(){
    ++id;
    this->msv = "SV" + string( 3 - to_string(id).size() , '0')  +  to_string(id);
    getline(cin , this->ten);
    getline(cin , this->tuoi);
    getline(cin , this->namsinh);
    cin >> this->gpa;
    cin.ignore();
}
void sinhvien::in(){
    cout << this->msv << " " <<  this->ten << " " << this->tuoi << " " << this->namsinh << " " << this->gpa << endl;
}
float sinhvien::getgpa(){
    return this->gpa;
}
bool cmp(sinhvien a , sinhvien b){
    return a.getgpa() < b.getgpa();
}
int main(){
    int n;
    cin >> n;
    cin.ignore();
    sinhvien x[100];
    for(int i = 0 ; i < n ; i++) {
        x[i].nhap();
    }
    //sort(x , x + n , cmp);
    for(int i = 0 ; i < n ; i ++){
        x[i].in();
    }
} 