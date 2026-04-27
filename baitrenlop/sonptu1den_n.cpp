#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;

        queue<long long> q;
        q.push(1);
        
        while(n--) {
            int re = q.front();
            q.pop();

            cout << re << " ";
            q.push(re * 10);
            q.push(re * 10 + 1);
        }
        cout << endl;
    }
}