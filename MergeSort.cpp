#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>& a , int l , int m, int r) {
    // Tạo 2 vector con
    vector<int> x(a.begin() + l , a.begin() + m + 1);
    vector<int> y(a.begin() + m + 1 , a.begin() + r + 1);
    int i = 0, j = 0, k = l;
    while (i < (int)x.size() && j < (int)y.size()) {
        if (x[i] <= y[j]) {
            a[k++] = x[i++];
        } else {
            a[k++] = y[j++];
        }
    }
    // Thêm các phần tử còn lại
    while (i < (int)x.size()) a[k++] = x[i++];
    while (j < (int)y.size()) a[k++] = y[j++];
}
void mergesort(vector<int> a , int l , int r){
    if(l >= r ) return ;
    int m = (l + r) / 2;
    mergesort(a , l , m);
    mergesort(a , m + 1 , r);
    merge(a , l , m , r);
}
int main(){

}