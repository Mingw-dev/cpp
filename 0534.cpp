#include <bits/stdc++.h>
using namespace std;
bool nd (const string &a){
	string t = a;
	reverse(t.begin() , t.end());
	return t == a;
} 
bool cmp(const pair<string , int> &a , const pair<string , int> &b){
	if(a.first.size() != b.first.size()) return a.first.size() > b.first.size();
	else return a.first > b.first;
} 
int main(){
	map<string , int> mp;
	string s;
	while(cin >> s){
		if(s.size() > 1 && nd(s)){
			mp[s] ++;
		}
	}
	vector<pair<string, int>> v(mp.begin( ) , mp.end());
	sort(v.begin() , v.end() , cmp);
	for(auto &x : v){
		cout << x.first << " " << x.second << endl;
	}
} 