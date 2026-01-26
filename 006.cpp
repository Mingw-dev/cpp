#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* next;
};
typedef struct Node* node;
node make(int x) {
    node tmp = new Node ();
    tmp ->data = x;
    tmp ->next = NULL;
    return tmp;
}
void nhap(node &a , int x) {
    node tmp = new Node ();
    if(a == NULL) {
        a = make(x); return;
    }
    node p = a;
    while(p -> next != NULL) p = p ->next;
    p ->next = make(x);
}
void solve(node &a) {
    for (node p = a ; p != nullptr ; p = p ->next ) {
        node q = p;
        while(q -> next != nullptr) {
            if( q ->next ->data == p ->data) {
                node tmp = q ->next;
                q ->next = tmp ->next;
                delete(tmp);
            } else {
                q = q -> next;
            }
        }
    }
}
void in(node a) {
    while(a != NULL) {
        cout << a ->data <<  " ";
        a = a ->next;
    }
}
int main() {
    int n;
    cin >> n;
    node First = nullptr;

    for(int i = 0 ; i < n ; i ++) {
        int x ; cin >> x;
        nhap (First , x);
    }
    solve(First) ;
    in(First);
}