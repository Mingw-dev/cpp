#include<iostream>
#include<map>
#include<vector>
#include<iomanip>
using namespace std;
using ll = long long;

int main(){
    map<int , vector<string>> ma;
    ma[101] = { "A" , "B", "B" , "A" , "D" , "C" , "C" , "A" , "B" , "D" , "C" ,"C" , "A" , "B" , "D"};
    ma[102] = { "A" , "C", "C" , "A" , "B" , "C" , "D" , "D" , "B" , "B" , "C" , "D" , "D" , "B" , "B"};
    int t;
    cin >> t;
    while (t--){
        int made;
        cin >> made;
        vector < string > awser(15);
        for(int i = 0 ; i < 15 ; i ++)
        cin >> awser[i];
        int correct = 0;
        for(int i = 0 ; i < 15 ; i++){
            if( awser[i] == ma[made][i]) correct ++;
        }
        double score = correct * 10.0 / 15;
        cout << fixed << setprecision(2) << score << endl;
    }

}