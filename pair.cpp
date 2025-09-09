#include<bits/stdc++.h>
using namespace std;
// pair
// tuple
int main() {
    // pair<int, int> p1(9, 2);
    // pair<int, int> p2 = make_pair(3, 4);
    tuple < int , int , int > t (1 , 2 , 3);
    cout << get<2>(t) << endl;
    tuple < string , int , string > b = make_tuple ("du ma may" , 100 , "trieu");
    for( auto x : b) cout << x << " ";
    return 0;
}