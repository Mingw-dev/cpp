#include<bits/stdc++.h>
using namespace std;

vector<char> a(1001 , 'A');
int n , ok = 1;

void ktao() {
    for(int i = 1 ; i <= n ; i++) a[i] = 'A'; 
}

void sinh() {
    int i = n;

    while( i >= 1 && a[i] == 'B') {
        a[i] = 'A';
        --i;
    }

    if(i == 0) ok = 0;
    else {
        a[i] = 'B';
    }

}
int main() 
{
    int t;
    cin >> t;
    while(t--) {
        cin >> n;

        ktao();

        while(ok) {
            for(int i = 1 ; i <= n ; i++) cout << a[i];
            cout << " ";
            sinh();
        }

        ok = 1;

        cout << "\n";
    }
}