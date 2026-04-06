#include<bits/stdc++.h>
using namespace std;
int cnt = 0;
struct node {
    int data;
    node *left;
    node *right;
};
typedef node* tree;
void add(tree &t , int y) {
    if(t == NULL) {
       node *x = new node;
       x->data = y;
       x->left = NULL;
       x->right = NULL;

       t = x;
    } else {
        if(y < t->data) add(t->left , y);
        else add(t->right , y);
    }
}

void pre(tree t) {
    if(t == NULL) return;
    pre(t->left);
    if(t->left != NULL || t->right != NULL) cnt++;
    pre(t->right);
}
int main() {
    int i;
    cin >> i;
    while(i--) {
        tree t = NULL;
        cnt = 0;
        int n;
        cin >> n;
        for(int i = 0 ; i < n ; i++) {
            int x;
            cin >> x;
            add(t , x);
        }
        pre(t);
        cout << cnt << endl;
        
    }
}