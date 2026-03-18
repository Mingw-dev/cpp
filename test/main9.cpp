#include<bits/stdc++.h>
using namespace std;

int main() {
    int a , b;
    cin >> a >> b;

    vector<int> sum(b + 1 , 0);
    for(int i = 1 ; i <= b / 2 ; i++) {
        for(int j = i * 2 ; j <= b; j+=i) {
            sum[j] += i;
        }
    }
    int cnt = 0;

    for(int i = a ; i <= b ; i++) {
        if(sum[i] > i) cnt++;
    }
    cout << cnt << endl;
}