#include<bits/stdc++.h>
using namespace std;

int n;
int a[21];
vector<int> ans;
vector<string> res;

void ql(int pos) {
    for(int j = pos ; j < n ; j++) {
        if(ans.empty() || a[j] > ans.back()) {
            ans.push_back(a[j]);

            if(ans.size() >= 2) {
                string s = "";
                for(auto x : ans) s += to_string(x) + " ";

                res.push_back(s);
            }

            ql(j + 1);
            ans.pop_back();
        }
    }
}
int main() {
    cin >> n;
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    ql(0);

    sort(res.begin() , res.end());
    for(auto x : res) cout << x << "\n";
}