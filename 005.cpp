#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node *next;
}; 
typedef struct Node* node;
void in(node a){
    //if(a == nullptr) return;
    while(a != nullptr) {
        cout << a ->data << " ";
        a = a -> next;
    }
}
node makenode(int x) {
    node tmp = new Node();
    tmp -> data = x;
    tmp -> next = NULL;
    return tmp;
}
void insert(node &a , int x) {
    if(a == NULL) {
        a = makenode(x);
        return;
    }
    node p = a;
    while(p -> next != nullptr) {
        p = p -> next;
    }
    p -> next = makenode(x);
} 
int dele(node &a , int x) {
    int cnt = 0;
    while(a != nullptr && a -> data == x) {
        node tmp = a;
        a = a -> next;
        delete tmp;
        cnt ++;
    }
    node p = a;
    while(p != NULL && p ->next != NULL) {
        if(p ->next ->data == x) {
            node tmp = p ->next;
            p -> next = tmp -> next;
            delete tmp;
            cnt ++;
        } else {
            p = p -> next;
        }
    }
    return cnt;
}
int main() {
    int n;
    cin >> n;

    node First = nullptr;
    for(int i = 0 ; i < n ; i ++) {
        int x; cin >> x;
        insert(First , x);
    }
    int x;
    cin >> x;

    int freq = dele(First , x);
    in(First);
}