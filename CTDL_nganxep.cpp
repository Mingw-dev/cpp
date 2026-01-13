//pop
//push
//size
//top
//empty
//lifo: last in first out
#include<bits/stdc++.h>
using namespace std;
int main(){
    stack <int> st;
    int n;
    cin >> n;
    int a[n];
    for( int &x : a) cin >> x;
    int b[n];
    for(int i = 0 ; i < n ; i++){
        if(st.empty()) {
            st.push(i);
        }
        else {
            while(!st.empty() && a[i] > a[st.top()]){
                b[st.top()] = a[i];
                st.pop();
            }
            st.push(i);
        }
    }
    while(!st.empty()){
        b[st.top()] = -1;
        st.pop();
    }
    for( auto x : b) cout << x << " " ;
}