// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     int T;
//     cin >> T;
//     while (T--) {
//         int n;
//         cin >> n;
//         vector<long long> a(n);
//         for (int i = 0; i < n; i++) cin >> a[i];

//         // Sao chép và sắp xếp
//         vector<long long> sortedA = a;
//         sort(sortedA.begin(), sortedA.end());

//         for (int i = 0; i < n; i++) {
//             // tìm phần tử đầu tiên > a[i]
//             auto it = upper_bound(sortedA.begin(), sortedA.end(), a[i]);
//             if (it == sortedA.end()) cout << "_";
//             else cout << *it;
//             if (i < n - 1) cout << " ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        map<int,int> mp;
        for(auto &x : a){
            cin >> x;
            mp[x]++;
        }
        int smax = *max_element(a.begin() , a.end());
        for(int i = 0 ; i < n ; i ++){   
            int check = false;
            int n = a[i] + 1;
            while(n <= smax){
                if(mp[n] != 0) {
                    check = true;
                    cout << n << " ";
                    break;
                }
                else n++;

            }
            if(!check) cout << "_" << " ";
        }
        cout << "\n";

    }
}
