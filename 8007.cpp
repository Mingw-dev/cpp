#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        long long cnt = 0;

        long long n;
        cin >> n;
        queue<long long> q;
        q.push(1);

        while(!q.empty()) {
            long long top = q.front();
            q.pop();

            if(top <= n) {
                cnt++;

                long long num1 = top * 10;
                if(num1 <= n) q.push(num1);
                
                long long num2 = top * 10 + 1;

                if(num2 <= n) q.push(num2);
            }
        }

        cout << cnt << endl;
    }
}