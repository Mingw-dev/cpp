#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll uc (ll a , ll b){
	while(b != 0){
		ll r = a%b;
		a = b;
		b = r;
	}
	return a;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string a;
		ll x , y;
		cin >> a >> x >> y;
		ll gcd = uc(x , y);
		string s ="";
		for(ll i = 0 ; i < gcd ; i++) s += a;
		cout << s << endl; 
	}
	
}