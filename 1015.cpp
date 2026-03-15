#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        queue<string> q;
        q.push("9");

        while(true) {
            string top = q.front();
            q.pop(); 
            long long r = 0;
            for(auto x : top) {
                r = ( (r * 10) + (x - '0') ) % n;
            } 

            if(r == 0) {
                cout << top << "\n";
                break;
            }
            q.push(top + "0");
            q.push(top + "9");
        }
    }
}