#include<bits/stdc++.h>
using namespace std;
struct node {
    int data;
    struct node *left;
    struct node *right;
};
typedef struct node Node;
typedef Node* Tree;
//khởi tạo cây
void ktao (Tree &t) {
    t = nullptr;// cây rỗng

}
//hàm thêm phần tử 

void add (Tree &t , int x) {
    // cây rỗng
    if(t == NULL) {   
        Node *p = new Node;
        p->data = x;
        p->left = NULL;
        p->right = NULL;

        t = p;
    }

    else {
        // nếu phần tử thêm vào nhỏ hơn node gốc thì thêm vào left
        if(t->data > x) add(t->left , x);
        else if(t->data < x) add(t->right , x);
    }
}

// duyệt NLR;
void NLR(Tree t) {
    if(t == NULL) return;
    cout << t->data << " ";
    NLR(t->left);
    NLR(t->right);
}
//duyệt LNR
void LNR(Tree t) {
    if(t == nullptr) return;
    LNR(t->left);
    cout << t->data << " ";
    LNR(t->right); 
}
void bfs(Tree t) {
    if(t == NULL) return;
    queue<Tree> q;
    q.push(t);
    while(!q.empty()) {
        Tree cur = q.front();
        q.pop();
        cout << cur->data << " ";
        if(cur->left) q.push(cur->left);
        if(cur->right) q.push(cur->right);
    }
}
int main() {
    Tree t;
    ktao(t);
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++) {
        int x;
        cin >> x;
        add(t , x);
    }
    NLR(t);
    cout << endl;
    LNR(t);
    cout << endl;
    bfs(t);
}