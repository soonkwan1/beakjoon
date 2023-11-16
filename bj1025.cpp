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
char** getTable(int n, int m){
    char** table = new char*[n];
    for (int i=0; i<n; i++){
        table[i] = new char[m];
        string line; cin >> line;
        for (int j=0; j<m; j++){
            table[i][j] = line[j];
        }
    }
    return table;
}
void freeTable(char** t, int n){
    for (int i=0; i<n; i++) delete[] t[i];
    delete[] t;
}
void printTable(char** t, int n, int m){
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout << t[i][j] << " ";
        }
        cout << endl;
    }
}
int isSquareNum(int n){
    int d = sqrt(n);
    if (pow(d, 2) == n) return n;
    return -1;
}
int getNum(char** table, int n, int m, int ix, int iy, int addx, int addy){
    if (addx == 0 && addy == 0) return isSquareNum(int(table[ix][iy]) - 48);

    int ans = -1;
    int x, y;

    string check = "";
    x = ix, y = iy;
    while (true){
        check += table[x][y];
        ans = max(ans, isSquareNum(stoi(check)));
        x += addx; y += addy;
        if (x < 0 || x >= n || y < 0 || y >= m) break;
    }

    check = "";
    x = ix, y = iy;
    while (true){
        check += table[x][y];
        ans = max(ans, isSquareNum(stoi(check)));
        x += addx; y -= addy;
        if (x < 0 || x >= n || y < 0 || y >= m) break;
    }

    check = "";
    x = ix, y = iy;
    while (true){
        check += table[x][y];
        ans = max(ans, isSquareNum(stoi(check)));
        x -= addx; y += addy;
        if (x < 0 || x >= n || y < 0 || y >= m) break;
    }

    check = "";
    x = ix, y = iy;
    while (true){
        check += table[x][y];
        ans = max(ans, isSquareNum(stoi(check)));
        x -= addx; y -= addy;
        if (x < 0 || x >= n || y < 0 || y >= m) break;
    }

    return ans;
}
void INPUT(){
    int n, m; cin >> n >> m;
    char** table = getTable(n, m);

    int ans = -1;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            for (int addx = 0; addx < n; addx++){
                for (int addy = 0; addy < m; addy++){
                    ans = max(ans, getNum(table, n, m, i, j, addx, addy));
                }
            }
        }
    }

    cout << ans << endl;
    
    freeTable(table, n);
}

int main(){
    INIT();
    INPUT();
    return 0;
}