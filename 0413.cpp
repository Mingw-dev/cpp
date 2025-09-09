#include<iostream>
#include<map>
#include<set>
#include<vector>
#include<algorithm>
#include<string>
#include<iomanip>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0 ; i < n ; i ++) cin >> a[i];
        sort(a.begin() , a.end() , greater<int> ());
        int i = 0 , j = n - 1;
        if( n % 2 == 0){
            while( i <= j){
                cout << a[i] << " " << a[j] << " ";
                i++; j--;
                
            }
        }
        else {
            while( i < j){
                cout << a[i] << " " << a[j] << " ";
                i++; j--;
                if( i == j )cout << a[n / 2];
            }
        }
        cout << endl;
    }
}