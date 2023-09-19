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

bool queenCheck(vector<int> table, int pos, int n){
    for (int i=0; i<table.size(); i++){
        if (pos == table[i] || table.size() - i == abs(pos - table[i])){
            return false;
        }
    }
    return true;
}

void dfs(vector<int> table, int n, int* res){
    if (table.size() == n){
        (*res)++;
        return;
    }

    for (int i=0; i<n; i++){
        if (queenCheck(table, i, n)){
            table.push_back(i);
            dfs(table, n, res);
            table.pop_back();
        }    
    }
}
void n_queen(int n){
    vector<int> table;
    int answer = 0;
    dfs(table, n, &answer);
    cout << answer << "\n";
}

void INPUT(){
    int n; cin >> n;
    n_queen(n);
    // int answer[15] = {0, 1, 0, 0, 2, 10, 4, 40, 92, 352, 724, 2680, 14200, 73712, 365596};
    // cout << answer[n] << endl;
}

int main(){
    INIT();
    INPUT();
    return 0;
}