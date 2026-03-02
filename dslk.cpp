#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node *next;
};
typedef struct Node* node;


//cấp phát động 1 node mới
node makeNode(int x){
    node tmp = new Node();
    tmp -> data = x;
    tmp -> next = nullptr;
    return tmp;
}

//kiểm tra rỗng
bool empty(node a){
    return a == nullptr;
}

//kiểm tra kích thước
int size(node a) {
    int cnt = 0;
    while(a != NULL){
        ++cnt;
        a = a -> next;
    }
    return cnt;
}


//them 1 phan tu vao dau
void insertfirst(node &a , int x) {
    node tmp = new Node();
    if(a == NULL) a = tmp;
    else {
        tmp -> next = a;
        a = tmp;
    }
}


//them phan tu vao cuoi
void insertlast(node &a , int x) {
    node tmp = new Node();
    if(a == NULL) a = tmp;
    else  {
        node p = a;
        while(p -> next != NULL) {
            p = p -> next;
        }
        p -> next = tmp;
    }
}

//them phan tu vao vi tri bat ki
void insert(node &a , int x , int pos){
    int n = size(a);
    if(pos <= 0 || pos > n + 1) return;
    if(pos == 1) {
        insertfirst(a , x);
        return;
    }
    else if( pos == n + 1) {
        insertlast(a , x);
        return;
    }
    node p = a;
    for(int i = 1 ; i < pos - 1 ; i++) {

        p = p -> next;
    }
    node tmp = makeNode(x);
    tmp -> next = p ->next;
    p -> next = tmp;
}


//xoa phan tu o dau
void delefirst( node &a ){
    if(a == NULL) return ;
    a = a -> next;
}

//xoa phan tu o cuoi
void delelast(node &a) {
    if(a == NULL) return;
    node truoc = NULL , sau = a;
    while( sau -> next != NULL) {
        truoc = sau;
        sau = sau -> next;
    }

    if(size(a) == 1) a -> next = NULL;
    else {
        truoc -> next = nullptr;
    } 
}

// xoa bat ki ow giua
void dele(node &a , int pos) {
    if(pos <= 0 || pos > size(a)) return;
    node truoc = nullptr , sau = a;
    for(int i = 1 ; i < pos ; i++){
        truoc = sau;
        sau = sau -> next;

    }
    if(truoc == NULL) a = a -> next;
    else truoc -> next = sau -> next;

}
void in (node a) {
    while(a != NULL) {
        cout << a ->data << " ";
        a = a -> next;
    }
}