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

bool** table;
void drawPaint(int x, int y){
    for (int i=x; i<x+10; i++){
        for (int j=y; j<y+10; j++){
            table[i][j] = 1;
        }
    }
}
void erasePaint(int x, int y){
    for (int i=x+1; i<x+9; i++){
        for (int j=y+1; j<y+9; j++){
            table[i][j] = 0;
        }
    }
}
void printTable(){
    for (int i=1; i<101; i++){
        for (int j=1; j<101; j++){
            cout << table[i][j] << " ";
        }
        cout << endl;
    }
}
void INPUT(){
    int n; cin >> n;
    table = new bool*[102];
    for (int i=0; i<102;i++){
        table[i] = new bool[102];
        fill_n(table[i], 102, 0);
    }

    while (n--){
        int x, y; cin >> x >> y;
        drawPaint(x, y);        
    }
    
    int ans = 0;
    for (int i=1; i<101; i++){
        for (int j=1; j<101; j++){
            if (table[i][j] == false && table[i][j+1] == 1) ans++;
            if (table[i][j] == false && table[i][j-1] == 1) ans++;
        }
    }
    for (int i=1; i<101; i++){
        for (int j=1; j<101; j++){
            if (table[i][j] == false && table[i+1][j] == 1) ans++;
            if (table[i][j] == false && table[i-1][j] == 1) ans++;
        }
    }
    cout << ans << endl;

    for (int i=0; i<102; i++){
        delete[] table[i];
    }
    delete[] table;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}