#include<bits/stdc++.h>
using namespace std;

int main() {
    // Tối ưu tốc độ nhập xuất cho n lớn
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        vector<int> a;
        bool check = false;
        
        for(int i = n / 7; i >= 0; i--) {
            int remaining = n - i * 7;
            if(remaining % 4 == 0) {
                int res4 = remaining / 4;
                int res7 = i;
                while(res4--) a.push_back(4);
                while(res7--) a.push_back(7);
                check = true;
                break; 
            }
        }

        if(!check) {
            cout << "-1\n";
        } else {
            for(int x : a) cout << x;
            cout << endl;
        }
    }
}