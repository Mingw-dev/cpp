#include<bits/stdc++.h>
using namespace std;

vector<string> res;

void init() {
    queue<string> qe;

    qe.push("1");
    res.push_back("1");
    while(res.size() < 10000) {
        string top = qe.front();
        qe.pop();

        string bit1 = top + "0";
        string bit2 = top + "1";

        res.push_back(bit1);
        res.push_back(bit2);

        qe.push(bit1);
        qe.push(bit2);

    }

}

int main() {
    int t;
    cin >> t;
    init();
    while(t--) 
    {
        int n;
        cin >> n;

        for(int i = 0 ; i < n ; i ++) {
            cout << res[i] << " ";
        }

        cout << endl;
    }
}