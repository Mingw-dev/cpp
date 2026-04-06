#include <bits/stdc++.h>
using namespace std;

int n;
int a[20]; 
vector<vector<int>> path;
vector<int> res;

void ql(int i, int sum) {
    for (int j = i; j < n; j++) {
        res.push_back(a[j]);
        sum += a[j];
        if (sum % 2 != 0) {
            path.push_back(res); 
        }
        
        ql(j + 1, sum);
        sum -= a[j];
        res.pop_back(); 
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) cin >> a[i];

        // BƯỚC 1: Sắp xếp dãy gốc giảm dần theo đề bài
        sort(a, a + n, greater<int>());

        res.clear();
        path.clear();

        // BƯỚC 2: Tìm các dãy con
        ql(0, 0);

        // BƯỚC 3: Sắp xếp danh sách kết quả theo thứ tự từ điển tăng dần
        //sort(path.begin(), path.end());

        // BƯỚC 4: In kết quả
        for (int i = 0; i < path.size(); i++) {
            for (int j = 0; j < path[i].size(); j++) {
                cout << path[i][j] << (j == path[i].size() - 1 ? "" : " ");
            }
            cout << endl;
        }
    }
    return 0;
}