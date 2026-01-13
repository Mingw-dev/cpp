#include<bits/stdc++.h>
using namespace std;
struct item {
    int w, v , in;
};
int n , b;
vector<item> items;
vector<bool> selec;
vector<bool> bests;
int bestv = 0;
int bestc = 0;
bool compare(const item&a , const item &b){
    double ratioA = (double) a.v / a.w;
    double ratioB = (double) b.v / b.w;
    return ratioA > ratioB;
}
double calcu(int level , int currw , int currv ){
    if(currw > b) return 0;
    double bound = currv;
    int rew = b - currw;
    for(int i = level ; i < n && rew > 0; i ++){
        if(items[i].w <= rew){
            bound += items[i].v;
            rew -= items[i].w;
        }
        else {
            bound += items[i].v * ((double) rew / items[i].w);
            rew = 0;
        }
    }
    return bound;
}
void solve(int l , int currw , int currv){
    if(l == n){
        if(currv > bestv && currw <= b){
            bestv = currv;
            bests = selec;
        }
        return;
    }
    double upp = calcu(l , currw , currv){
        if(uppe <= bestv) return n;
    }
    if(currw + items[l + 1] , currw + items[l].w, curr + items[l].v);
    selec[l] = false;
}