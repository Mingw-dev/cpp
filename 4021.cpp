#include<bits/stdc++.h>
using namespace std;

vector<string> f(95);
string fibo(int n) {
    if (n == 1) return "0";
    if (n == 2) return "1";

    string f1 = "0", f2 = "1", fn;
    for (int i = 3; i <= n; i++) {
        fn = f1 + f2;
        f1 = f2;
        f2 = fn;
    }
    return f2;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n , k;
        cin >> n >> k;
        string s = fibo(n) ;
        cout << s[k - 1] << endl;
    }
}
