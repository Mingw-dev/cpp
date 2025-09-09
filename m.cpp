#include<iostream>
#include<vector>
#include<set>
#include<string>
using namespace std;
using ll = long long;
int main(){
    int t;
	cin >> t;
	cin.ignore();
	while(t--){
		ll n; cin >> n;
		vector <ll> a(n);
		for(ll i = 0 ; i < n ; i ++) cin >> a[i];
		set <char> se;
		for ( auto x : a){
			string s = to_string(x);
			for(int i = 0 ; i < s.size() ; i++) se.insert(s[i]);
		} 
		for( auto x : se) cout << x << " ";
		cout << endl;
	}
}
