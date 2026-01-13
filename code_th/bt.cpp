#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    double c;
    cin >> c;
    int n = 0;
    if(c > 0){
        n = (int)((1.0 / c - 1) / 2);
        while(n >= 0 && (1.0 / 2 * n + 1) <= c ){
            n--;
        }
    }
    else {
        n = 1000000;
    }
    if(n < 0) n = -1;
    double s = 0.0;
    if( n >= 0){
        for(int i = 0 ; i <= n ; i++){
            double term = 1.0 / ( 2 * i + 1);
            if(i % 2 == 1){
                term = -term;
            }
            s += term;
        }
        s *= 4;
    }
    else s = 0.0;
    cout << fixed << setprecision (6) << s << endl;

}