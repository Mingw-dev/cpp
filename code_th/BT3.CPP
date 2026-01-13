#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        vector<int> freq(26 ,0 );
        for(char c : s) freq[c - 'a'] ++;
        int n = s.size();
        int maxfr = *max_element(freq.begin() , freq.end());
        if(maxfr > (n + 1) / 2) cout << "0\n";
        else cout << "1\n";
    }   
}