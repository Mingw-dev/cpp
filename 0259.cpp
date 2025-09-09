#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m , n , p;
    cin >> m >> n >> p;
    vector <vector<int>> a , b ;
    a.resize( m , vector <int> (n) );
    b.resize( n , vector <int> (p) );
    vector<vector<int>> c (m , vector<int> ( p , 0));
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++)
        cin >> a[i][j];
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < p ; j++)
        cin >> b[i][j];
    }
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < p ; j++){
            for(int k = 0 ; k < n ; k++)
            c[i][j]  += a[i][k] * b[k][j];
        }
    }
    for(int i = 0 ; i < m ; i ++){
        for(int j = 0 ; j < p ; j++)
            cout << c[i][j] << " " ;
        cout << endl;
    }

}