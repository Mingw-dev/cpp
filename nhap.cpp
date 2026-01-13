#include<bits/stdc++.h>
using namespace std;
void solve(string a , string b){
    int n = a.size() , m = b.size();
    vector<int> res(n + m , 0);
    for(int i = n - 1; i >= 0 ; i--){
        for(int j = m - 1 ; j >= 0 ; j--){
            int mul = (a[i] - '0') * (b[j] - '0');
            int sum = mul + res[i + j + 1];
            
            res[i + j + 1] = sum % 10;
            res[i + j] += sum / 10;
        }
    } 
    int i = 0;
    while(i < res.size() && res[i] == 0) i++;
    for(int j = i ; j < res.size() ; j++) cout << res[j];
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string a , b;
        cin >> a >> b;
        solve(a , b);
    }
}