#include<bits/stdc++.h>
using namespace std;

vector<int> a(1001 , 0) ;
int n , ok = 1;
void ktao() 
{
    for(int i = 1 ; i <= n ; i++) a[i] = i;
}

void sinh() {
    int i = n - 1;

    while( i >= 1 && a[i] > a[ i + 1]) i --;

    if(i == 0) ok = 0;

    else {
        int j = n;
        while( a[j] < a[i] ) --j;
        swap(a[i], a[j]);

        reverse(a.begin() + i + 1 , a.begin() + n + 1);

    }
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        cin >> n;

        ktao();
        
        vector< vector<int> > b;
        
        while(ok) {
            vector<int> tmp(a.begin() + 1 , a.begin() + n + 1);
            b.push_back(tmp);
            
            sinh();
            
        }
        
        for(int i = b.size() - 1 ; i >= 0 ; i--) {
            for(int x : b[i]) cout << x;
            cout << " ";
        }
        
        ok = 1;
        cout << endl;
    }
}