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

int n;
char** table;
void INPUT(){
    cin >> n;
    table = new char*[n];
    for (int i=0; i<n; i++) {
        table[i] = new char[n];
        fill_n(table[i], n, ' ');
    }
}
void starPrint(){
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout << table[i][j];
        }
        cout << endl;
    }
}
void starReg(int cnt, int x, int y){
    if (cnt == 3){
        int state = 0;
        for (int i=x; i<x+3; i++){
            for (int j=y; j<y+3; j++){
                state++;
                if (state == 5) continue;
                table[i][j] = '*';
            }
        }
        return;
    }

    int state = 0;
    for (int i=x; i<x+cnt; i += cnt/3){
        for (int j=y; j<y+cnt; j += cnt/3){
            state++;
            if (state == 5) continue;
            starReg(cnt/3, i, j);
        }
    }
}
void freeMem(){
    for (int i=0; i<n; i++) delete[] table[i];
    delete[] table;
}
void SOLUTION(){
    starReg(n, 0, 0);
    starPrint();
    freeMem();
}

int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}