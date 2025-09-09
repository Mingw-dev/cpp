#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	int t; cin >> t;
	while (t--){
		map <string , double > toado;
		cin >> toado["Ax"] >> toado["Ay"];
		cin >> toado["Bx"] >> toado["By"];
		double x = toado["By"] - toado["Ay"];
		double y = toado["Bx"] - toado["Ax"];
		double kq = sqrt( x * x + y * y);
		cout << fixed << setprecision (4) << kq << endl;
		}
	}
