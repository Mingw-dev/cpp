#include<bits/stdc++.h>
using namespace std;
int n , b ; //n là số đồ vật , b là sức chứa túi
int w[100] , v[100] ;// w là trọng lượng đồ vật , v là giá trị
int x[100] , xopt[100] ;// x[i] là nghiệm phương trình nhận các giá trị 0 và 1, xopt: phương pháp tối ưu
int fopt = -1; // giá trị tối ưu
long check(int x[] , int n){
    long s = 0 , tmp = 0;
    int i;
    for(int i = 1 ; i <= n ; i ++){
        s += x[i] * w[i];
    }
    if(s <= b){
        for(int i = 1 ; i <= n ; i++){
            tmp += x[i] * v[i];
        }
    }
    else tmp = -1;
    return tmp;
}
void solve(int x[] , int n){
    int i;
    for(i = 1 ; i <= n ; i++) x[i] = 0;
    while(1){
        long tmp = check(x , n);
        if(fopt < tmp){
            fopt = tmp;
            for(int i = 1 ; i <= n ; i++) xopt[i] = x[i];
        }
        int i = n;
        while (i > 0 && x[i] == 1){
            x[i] = 0;
            i--;

        }
        if(i == 0){
            cout << fopt << endl;
            for(int i = 1 ; i <= n ; i++)
                cout << xopt[i] <<  " ";
            return;
        }else x[i] = 1;
    }
}
int main(){
    cin >> n >> b;
    for(int i = 1 ; i <= n ; i++){
        cin >> w[i] >> v[i];
    }
    solve(x , n);

}