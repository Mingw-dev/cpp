#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    stack<int> st;
    int t;
    cin >> t;
    while(t--) {
        string thao_tac;

        cin >> thao_tac;
        if(thao_tac == "PUSH") {
            int x;
            cin >> x;
            st.push(x);
        }

        else if(thao_tac == "POP") {
            if(!st.empty()) st.pop();
        }

        else if(thao_tac == "PRINT") {
            if(st.empty()) cout << "NONE\n";
            else {
                cout << st.top();
                cout << "\n";
            }
            
        }
    }
}