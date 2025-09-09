#include<iostream>
#include<set>
#include<string>
using namespace std;
//insert
//find
//count
//size
//multiset
//erase
using ll = long long;
int main(){
    // set<int> s;
    // for(int i = 0 ; i < 10 ; i++){
    //     s.insert(i);
    // }
    // //cout << "kich thuoc cua set: " << s.size() << "\n";
    // for(int i : s){
    //     cout << i << " ";
    // }
    // cout << "\n";
    // s.erase(9);
    // s.erase(s.find(8));
    // for(int i : s){
    //     cout << i << " ";
    // }
    // cout << "\n";
    // cout << *s.begin()<< endl;
    // cout << *s.rbegin() << endl;
    //  for(auto x : s){
    //     cout << x << " ";
    //  }
    // cout << endl;
    // for( set<int> :: iterator it = s.begin() ; it != s.end() ; it ++){
    //     cout << *it << " ";
    // }
    // cout << endl;
    // int n;
    // cin >> n;
    // set <string> s;
    // cin.ignore(); // Bỏ ký tự '\n' còn lại trong bộ đệm
    // for(int i = 0 ; i < n ; i++){
    //     string x;
    //     getline(cin, x);
    //     s.insert(x);
    // }
    // cout << s.size() << endl;
    // for(string x : s){
    //     cout << x << endl;
    // }
    // int n , k ;
    // cin >> n >> k;
    // int a[n];
    // for(int &x : a) cin >> x;
    // multiset<int> ms;
    // for(int i = 0 ; i < k ; i++) ms.insert(a[i]);
    // for(int i = k ; i < n ; i++){
    //     cout << *ms.rbegin() << " ";
    //     ms.erase(ms.find(a[i - k]));
    //     ms.insert(a[i]);
    // }
    // cout << *ms.rbegin() << endl;
    int n; cin >> n;
    int a[n];
    multiset<int> ms;
    for( int &x : a) cin >> x;
    for(int i = 0 ; i < n ; i++) ms.insert(a[i]);
    for( auto x : ms) cout << x << " ";
    cout << endl;
    for(int i = 0 ; i < n ; i++) cout << ms.count(a[i]) << " ";
}
