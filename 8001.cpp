#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int stt;
        cin >> stt;

        queue<int> q;

        while(stt--) {
            int n;
            cin >> n;
                if(n == 1) cout << q.size() << endl;

                else if(n == 2) {
                    if(q.empty()) cout << "YES\n";
                    else cout << "NO\n";
                }

                else if(n == 3) {
                    int x;
                    cin >> x;
                    q.push(x);
                }

                 else if(n == 4) {
                    if(!q.empty()) {
                        q.pop();
                    }
                }

                 else if(n == 5) {
                    if(!q.empty()) cout << q.front() << "\n";
                    else cout << "-1\n";
                }

                 else if(n== 6) {
                    if(!q.empty()) cout << q.back() << endl;
                    else cout << "-1";
                
            }
        }
    }
}