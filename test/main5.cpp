#include<bits/stdc++.h>
using namespace std;
struct re {
    vector<int> idx;
    int sumtt;
};
int n , k;
int a[1005];
vector<re> kq;
bool check = false;
bool cmp(re &a , re &b) {
    if(a.sumtt != b.sumtt) return a.sumtt < b.sumtt;
    return a.idx < b.idx;
}
void ql(int i , int sum , vector<int> path) {
    if(sum <= k && !path.empty()) {
        check = true;
        re res;
        res.sumtt = sum;
        res.idx = path;
        kq.push_back(res);
        
        
    }
    for(int j = i ; j < n ; j++) {
        if(sum + a[j] <= k) {
            path.push_back(j + 1);
            ql(j + 1 , sum + a[j] , path);
            path.pop_back();
        }
    }
}
int main() {
    cin >> n >> k;
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    vector<int>path;
    ql(0 , 0 , path);
    sort(kq.begin() , kq.end() , cmp);
    if(!check) cout << "-1\n";
    else {
        for(auto x : kq) {
            for(int i : x.idx) cout << i << " ";
            cout << endl;
            cout << "Sum = ";
            cout << x.sumtt << endl;
        }
    }
}