#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#define endl "\n"
#define ll long long
#define fastio cin.tie(NULL), cout.tie(NULL), ios_base::sync_with_stdio(false);
using namespace std;

bool checkString(string word){
    string check[10] = {"i", "pa", "te", "ni", "niti", 
    "a", "ali", "nego", "no", "ili"};
    for (int i=0; i<10; i++){
        if (word == check[i]) return false;
    }
    return true;
}

void INPUT(){
    string line; getline(cin, line);
    vector<string> v;
    string tmp = "";
    bool flag = true;
    for (int i=0; i<line.size(); i++){
        if (line[i] == ' '){
            if (flag && !checkString(tmp)) v.push_back(tmp);
            if (checkString(tmp)) v.push_back(tmp);
            tmp = "";
            flag = false;
        }
        else{
            tmp += line[i];
        }
    }
    v.push_back(tmp);

    

    for (int i=0; i<v.size(); i++){
        cout << char(int(v[i][0]) - 32);
    }
    cout << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}