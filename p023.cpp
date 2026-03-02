#include<bits/stdc++.h>
using namespace std;
int nt(int n) {
    for(int i = 2 ; i * i <= n ; i++) {
        if(n % i == 0) return 0;
    }

    return n > 1;
}

int n , k;
vector<int> a(k + 1);

vector< vector<int> > b;
void ql(int i) {
    for(int j = a[i - 1] + 1 ; j <= n - k + i ; j++ ) {
        a[i] = j;
        if(i == k) b.push_back(vector<int> (a.begin() + 1 , a.begin() + k + 1));
        else {
            ql(i + 1);
        }
    }
}
int main() {
    cin >> n >> k;
    a.assign(k + 1, 0);  // resize + gán 0
    
    
    //a[0] = 0;
    ql(1);
    for(int i = 0; i < b.size() ; i++) {
        if(nt(i + 1)) {
            cout << i + 1 << ": ";
            for(int x : b[i]) cout << x << " ";
            cout << endl;
        }
    } 
}