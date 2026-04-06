#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node *left, *right;
};

typedef node* tree;
void ktao(tree &t) {
    t = nullptr;

}

//them phan tu
void add(tree &t, int x) {
    if(t == NULL) {
        node *p = new node;
        p->data = x;
        p->left = NULL;
        p->right = NULL;

        t = p;
    } else {
        if(x > t->data) add(t->right , x);
        else add(t->left , x);
    }
}
//duyet NRL 
void NRL(tree t) {
    if(t == NULL) return;
    cout << t->data << " ";
    NRL(t->right);
    NRL(t->left);
}

//duyet NLR Preorder (NLR)
void NLR(tree t){
    if(t == NULL) return;
    cout << t->data << " ";
    NLR(t->left);
    NLR(t->right);
}

//duyet LRN Inorder (LNR)
void LRN(tree t) {
    if(t == NULL) return;
    LRN(t->right);
    cout << t->data << " ";
    LRN(t->left);
}
void bfs(tree t) {
    if(t == NULL) return;

    queue<tree> q;
    q.push(t);

    while(!q.empty()) {
        tree cur = q.front();
        q.pop();
        cout << cur->data << " ";
        if(cur->left) q.push(cur->left);
        if(cur->right) q.push(cur->right);
    }
}