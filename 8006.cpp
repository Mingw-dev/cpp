#include<bits/stdc++.h>
using namespace std;


void init(int n) {
    queue<string> qe;
    qe.push("9");
    while(!qe.empty()){
        string top = qe.front();
        qe.pop();

        if(stoll(top) % (long long)n == 0) {
            cout << top << endl;
            break;
        }

        else {
            string bit1 = top + "0";
            qe.push(bit1);


            string bit2 = top + "9";
            qe.push(bit2);
        }
    }
}

void solve() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        init(n);

    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}