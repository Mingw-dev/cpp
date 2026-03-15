#include<bits/stdc++.h>
using namespace std;

long long f[100];

long long fibo(int n) {
    if(n <= 1) return 1;

    if(f[n] != -1) return f[n];

    f[n] = fibo(n - 1) + fibo(n - 2);

    return f[n];
}

int main() {

    memset(f , -1 , sizeof(f));

    cout << fibo(91) << endl;

}