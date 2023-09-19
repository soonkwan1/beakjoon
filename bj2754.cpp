#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}

void INPUT(){
    string grade; cin >> grade;
    map<string, string> g;
    g["A+"] = "4.3"; g["A0"] = "4.0"; g["A-"] = "3.7";
    g["B+"] = "3.3"; g["B0"] = "3.0"; g["B-"] = "2.7";
    g["C+"] = "2.3"; g["C0"] = "2.0"; g["C-"] = "1.7";
    g["D+"] = "1.3"; g["D0"] = "1.0"; g["D-"] = "0.7";
    g["F"] = "0.0";
    cout << g[grade] << endl;
}

int main(){
    INIT();
    INPUT();
    return 0;
}