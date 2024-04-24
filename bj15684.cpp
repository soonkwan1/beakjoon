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

int n, m, h;
bool** ladder;
void startCode(){
    ladder = new bool*[h];
    for (int i=0; i<h; i++){
        ladder[i] = new bool[n];
        fill_n(ladder[i], n, false);
    }
    
    for (int i=0; i<n; i++){
        if (i % 2 == 1) continue;
        for (int j=0; j<h; j++){
            ladder[j][i] = 1;
        }
    }
}
void endCode(){
    for (int i=0; i<h; i++) delete[] ladder[i];
    delete[] ladder;
}
void printLadder(){
    for (int i=0; i<h; i++){
        for (int j=0; j<n; j++){
            cout << ladder[i][j] << " ";
        }
        cout << endl;
    }
}
void INPUT(){
    cin >> n >> m >> h;
    h = h * 2 + 1;
    n = n * 2 - 1;
}
void SOLUTION(){
    startCode();

    printLadder();

    endCode();
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}