#include<bits/stdc++.h>
using namespace std;
map<int , int> freq;

bool cmp (int a , int b) {
    if(freq[a] != freq[b]) return freq[a] > freq[b];
    return a < b;
}
int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        freq.clear();
        vector<int> a(n);

        for(int &x : a) {
            cin >> x;
            freq[x] ++;
        }

        sort(a.begin() , a.end() , cmp);

        for(int x : a) cout << x << " ";
        cout << endl;

    }
}