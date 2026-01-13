    #include<bits/stdc++.h>
    using namespace std;
    int a[100];
    int n;
    int ok;
    void start(){
        for(int i = 1 ; i <= n ; i++){
                a[i] = 0;
            }
    }
    void sinh(){
        int i = n;
        while(i >=1 && a[i] == 1){
            a[i] = 0;
            --i;
        }
        if(i == 0) ok = 0;
        else a[i] = 1;
    }
    int main(){
        int t; cin >> t;
        while( t--){
            ok = 1;
            cin >> n;
            start();
            while(ok){
                for(int i = 1 ; i <= n ; i++){
                    cout << a[i] ;
                }
                cout << " ";
                sinh();
                if(ok == 0) break;
            }
            cout << endl;
        }
    }