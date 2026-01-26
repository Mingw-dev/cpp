#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &a , int l , int m , int r) {
    vector<int> x (a.begin() + l , a.begin() + m + 1);

    vector<int> y (a.begin() + m + 1  , a.begin() + r + 1);
    int i = 0 , j = 0;

    int s1 = x.size(), s2 = y.size();

    while(i < s1 && j < s2) {
        if(x[i] < y[j]) 
        {
            a[l ++] = x[i];

            i++;
        } else {
            a[l++] = y[j];
            j++;
        }
    }
    while(i < s1) {
        a[l++] = x[i++];
    }
    while(j < s2) a[l++] = y[j++];
}

void mergeSort(vector<int> &a , int l , int r) {
    if(l >= r) return;
    int m = (l + r) / 2;

    mergeSort(a , l , m);
    mergeSort(a , m + 1 , r);
    merge(a , l , m , r);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for(int &x : a) cin >> x;
        mergeSort(a , 0 , n - 1);

        for(int x : a) cout << x << " ";
        cout << "\n";   
    }
}