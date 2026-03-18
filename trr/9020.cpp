#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    vector<vector<int>> v(n + 1 , vector<int> (n + 1 , 0));

    for(int i = 1 ; i <= n ; i++) {
        string s;
        getline(cin , s);
        stringstream ss (s);
        int u;
        while(ss >> u) {
            v[i][u] = 1;
        }
        
    }

    for(int i = 1 ; i <= n ; i++) {
        for(int j = 1 ; j <= n ; j++) 
            cout << v[i][j] << " ";
        cout << endl;
    }
}