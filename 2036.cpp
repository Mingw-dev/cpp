#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> a = {
        {4},
        {1,3,5},
        {3,5,7}
    };

    sort(a.begin(), a.end());

    for(auto v : a){
        for(int x : v) cout << x << " ";
        cout << endl;
    }
}