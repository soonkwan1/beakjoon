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

int table[10][10];
int paperList[6] = {0, 5, 5, 5, 5, 5};
int ans = int(1e9);
void INPUT(){
    for (int i=0; i<10; i++){
        for (int j=0; j<10; j++){
            cin >> table[i][j];
        }
    }
}
void printTable(){
    for (int i=0; i<10; i++){
        for (int j=0; j<10; j++){
            cout << table[i][j] << " ";
        }
        cout << endl;
    }
}
int checkPaper(int x, int y, int s){
    if (s != 1 && !paperList[s]) return 0;
    else if (s == 1 && !paperList[s]) return -1;

    for (int i=x; i<x+s; i++){
        for (int j=y; j<y+s; j++){
            if (table[i][j] == 0) return 0;
        }
    }

    for (int i=x; i<x+s; i++){
        for (int j=y; j<y+s; j++){
            table[i][j] = 0;
        }
    }
    paperList[s]--;
    return 1;
}
pair<int,int> findOne(){
    for (int i=0; i<10; i++){
        for (int j=0; j<10; j++){
            if (table[i][j] == 1) return make_pair(i, j);
        }
    }
    return make_pair(10, 10);
}

bool hasZero(int x, int y, int k){
    for (int i=x; i<x+k; i++){
        for (int j=y; j<y+k; j++){
            if (table[i][j] == 0) return true;
        }
    }
    return false;
}
bool hasOne(){
    for (int i=0; i<10; i++){
        for (int j=0; j<10; j++){
            if (table[i][j] == 1) return true;
        }
    }
    return false;
}
void transferOne(int x, int y, int k){
    for (int i=x; i<x+k; i++){
        for (int j=y; j<y+k; j++){
            table[i][j] = 1;
        }
    }
}
void transferZero(int x, int y, int k){
    for (int i=x; i<x+k; i++){
        for (int j=y; j<y+k; j++){
            table[i][j] = 0;
        }
    }
}
void dfs(int x, int y, int depth){
    if (!hasOne()){
        ans = min(ans, depth);
        return;
    }

    for (int k=5; k>=1; k--){
        if (x + k  > 10 || y + k > 10 || !paperList[k]) continue;
        
        bool chk = hasZero(x, y, k);
        if (!chk){
            transferZero(x, y, k);
            paperList[k]--;

            pair<int,int> n_par = findOne();
            dfs(n_par.first, n_par.second, depth + 1);

            transferOne(x, y, k);
            paperList[k]++;
        }
    }
}
void SOLUTION(){
    pair<int,int> start = findOne();
    dfs(start.first, start.second, 0);
    if (ans == int(1e9)) cout << -1 << endl;
    else cout << ans << endl;
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}