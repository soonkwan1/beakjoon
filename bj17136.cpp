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
void SOLUTION(){
    for (int k=5; k>=1; k--){
        for (int i=0; i<=10-k; i++){
            for (int j=0; j<=10-k; j++){
                if (table[i][j] == 0) continue;
                
                int res = checkPaper(i, j, k);
                if (res == -1) {
                    cout << -1 << endl;
                    return;
                }
            }
        }
    }
    int ans = 25;
    for (int i=1; i<=5; i++){
        ans -= paperList[i];
    }
    cout << ans << endl;
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}