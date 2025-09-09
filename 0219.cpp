#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int m , n ;
        cin >> m >> n;
        vector < vector <int> > a ;
        a.resize( m , vector<int> (n));
        vector<bool> cot ( m , false) , hang( n , false);
        for(int i = 0 ; i < m ; i ++){
            for(int j = 0 ; j < n ; j++){
                cin >> a[i][j];
                if(a[i][j] == 1){
                    cot[i] = true;
                    hang[j] = true;
            }
            }
        }
        for(int i = 0 ; i < m ; i ++){
            for(int j = 0 ; j < n ; j++){
                if( cot[i] || hang[j])
                a[i][j] = 1;
            }
        }
        for(int i = 0 ; i < m ; i ++){
            for(int j = 0 ; j < n ; j++)
            cout << a[i][j] << " ";
            cout << "\n";
        }
    }
}