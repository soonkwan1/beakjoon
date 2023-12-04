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
#define fse(A,B,C) for (int i=A; i<B; i+=C)
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
int candyCheck(char** table, int r, int c, int x, int y){
    if (table[x][y] == '>'){
        if (y + 2 >= c) return 0;
        if (table[x][y+1] == 'o' && table[x][y+2] == '<') return 1;
    }
    else if (table[x][y] == 'v'){
        if (x + 2 >= r) return 0;
        if (table[x+1][y] == 'o' && table[x+2][y] == '^') return 1;
    }
    return 0;
}
void INPUT(){
    int tc; cin >> tc;
    while (tc--){
        int r, c; cin >> r >> c;
        char** table = new char*[r];
        for (int i=0; i<r; i++){
            table[i] = new char[c];
            for (int j=0; j<c; j++){
                cin >> table[i][j];
            }
        }

        int ans = 0;
        for (int i=0; i<r; i++){
            for (int j=0; j<c; j++){
                if (table[i][j] != 'v' && table[i][j] != '>') continue;
                ans += candyCheck(table, r, c, i, j);
            }
        }
        cout << ans << endl;

        for (int i=0; i<r; i++) delete[] table[i];
        delete[] table;
    }
    
}

int main(){
    INIT();
    INPUT();
    return 0;
}