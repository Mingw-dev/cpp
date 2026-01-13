#include<bits/stdc++.h>
using namespace std;
class diem {
    private:
        float x , y;
    public:
        friend istream& operator >> (istream & in , diem& a){
            in >> a.x >> a.y;
        }
        friend ostream& operator <<(ostream & out , diem a){
            out << a.x << a.y;
        }
};  