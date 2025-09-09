#include<iostream>
#include<string>
#include<vector>
using namespace std;
// push_back
// vetor < kiểu dữ liệu > tên biến;
// vector < int > v;
//vector < int > v(n) <=> int a[n];
// vector < int > v(n , value) <=> int a[n] = {value, value, ..., value};
int main(){
    int n;
    cin >> n;
    vector < int > v;
    // for(int i = 0 ; i < n ; i++) {
    //     int x ; cin >> x;
    //     v.push_back(x);
    // }
    // for( auto x : v) cout << x << " ";
    // cout << endl;
    // for(vector <int> :: iterator it = v.begin() ; it != v.end() ; it++) cout << *it << " ";
    // cout << endl;
    // for( auto x = v.begin() ; x != v.end() ; x ++) cout << *x << " ";
    // cout << endl;
    // cout << v[0] << endl;
    // cout << v.at(2) << endl; // at() kiểm tra chỉ số
    // cout << v.back() << endl;
    // vector <int> a(n , 10);
    // for(int i = 0 ; i < n ; i ++) cout << a[i] << " " ;
    // a.push_back(20);
    // cout << endl;
    vector <string> s;
    cin.ignore();
    s.push_back("dumayou");
    s.push_back("Dsa va python");
    s.push_back("C++");
    for( auto x : s) cout << x << " ";
}