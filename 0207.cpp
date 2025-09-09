#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n , d; cin >> n >> d;
        vector < int > ve;
        for(int i = 0 ; i < n ; i++){
            int x ; cin >> x;
            ve.push_back(x);
        } 
        vector < int > a;
        for(int i = d ; i < n ; i++){
            a.push_back(ve[i]);
        }
        for(int i = 0 ; i < d ; i++)
            a.push_back(ve[i]);
        for( auto x : a) cout << x << " ";
        cout << endl;
    }
}