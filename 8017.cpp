#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        queue<string> qe;
        qe.push("6");
        qe.push("8");
        vector<string> v;
        while(!qe.empty()) {
            string fr = qe.front();
            qe.pop();

            if(fr.size() <= n) {
                v.push_back(fr);

                string s1 = fr + "6";
                string s2 = fr + "8";
                qe.push(s1);
                qe.push(s2);
                
            }
        }
        cout << v.size() ;
        cout << endl;
        for(int i = v.size() - 1 ; i >= 0 ; i --) {
            cout << v[i] << " ";
        }
        cout << endl;
    }
}