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

void INPUT(){
    string line; cin >> line;
    vector<char> word;
    for (int i=0; i<line.size(); i++) word.push_back(line[i]);
    
    int t; cin >> t;
    vector<char> tmp;
    while (t--){
        string cmd; cin >> cmd;
        if (cmd == "L"){
            if (word.size() == 0) continue;
            tmp.push_back(word.back());
            word.pop_back();
        }
        else if (cmd == "D"){
            if (tmp.size() == 0) continue;
            word.push_back(tmp.back());
            tmp.pop_back();
        }
        else if (cmd == "B"){
            if (word.size() == 0) continue;
            word.pop_back();
        }
        else if (cmd == "P"){
            char ch; cin >> ch;
            word.push_back(ch);
        }
    }
    while (!tmp.empty()){
        word.push_back(tmp.back());
        tmp.pop_back();
    }

    for (int i=0; i<word.size(); i++) cout << word[i];
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