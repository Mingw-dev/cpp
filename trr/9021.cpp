#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<vector<int>> ve(n + 1 , vector<int>(n + 1 , 0));

    for(int i = 1 ; i <= n ; i++) {
        for(int j = 1 ; j <= n ; j++)
            cin >> ve[i][j];
    }

    for(int i = 1 ; i <= n ; i++) {
        
        for(int j = 1 ; j <= n ; j++)
            {
                if(ve[i][j] == 1) cout << j << " ";
            }    

            cout << endl;
    }
}