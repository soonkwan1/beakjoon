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
    int r, c; cin >> r >> c;
    char** table = new char*[r*2];
    for (int i=0; i<r*2; i++){
        table[i] = new char[c*2];
    }

    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            cin >> table[i][j];
        }
    }

    for (int i=0; i<r; i++){
        int start = c - 1;
        for (int j=c; j<c*2; j++){
            table[i][j] = table[i][start];
            start--;
        }
    }

    int start = r - 1;
    for (int i=r; i<r*2; i++){
        for (int j=0; j<c*2; j++){
            table[i][j] = table[start][j];
        }
        start--;
    }

    int a, b; cin >> a >> b;
    a--; b--;
    if (table[a][b] == '#') table[a][b] = '.';
    else table[a][b] = '#';

    for (int i=0; i<r*2; i++){
        for (int j=0; j<c*2; j++){
            cout << table[i][j];
        }
        cout << endl;
    }

    for (int i=0; i<r*2; i++) delete[] table[i];
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