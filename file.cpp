#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    fstream in;
    in.open("input.txt");
    if (!in.is_open()) {
        cerr << "Không th? m? file input.txt" << endl;
        return 1;
    }
    in >> str;
    in.close();

    string strB = str;
    fstream out;
    out.open("output.txt");
    if (!out.is_open()) {
        cerr << "Không th? m? file output.txt" << endl;
        return 1;
    }

    out << strB;
    out.close();
    return 0;
}
