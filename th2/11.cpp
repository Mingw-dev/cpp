#include<bits/stdc++.h>
using namespace std;
bool check(string s) {
    if(s.back() == '2') return false;

    bool n2 = false, n3 = false, n5 = false, n7 = false;
    for(char c : s) {
        if(c == '2') n2 = true;
        if(c == '3') n3 = true;
        if(c == '5') n5 = true;
        if(c == '7') n7 = true;
    }
    return (n2 && n3 && n5 && n7);
}   
int main() {
    int n;
    cin >> n;

    queue<string> q;
    q.push("2");
    q.push("3");
    q.push("5");
    q.push("7");

    while(!q.empty()) {
        string s = q.front();
        q.pop();
        
        if(s.size() > n) continue;

        if(s.size() >= 4 && check(s)) cout << s << "\n";

            if(s.size() < n) {
            q.push(s + "2");
            q.push(s + "3");
            q.push(s + "5");
            q.push(s + "7");
        } 
    }
}