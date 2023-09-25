#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <set>
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
char** setMem(int n){
    char** table = new char*[n+1];
    for (int i=0; i<=n; i++){
        table[i] = new char[n*2+1];
        for (int j=0; j<=2*n; j++){
            table[i][j] = ' ';
        }
    }
    return table;
}
void freeMem(char** t, int n){
    for (int i=0; i<=n; i++) delete[] t[i];
    delete[] t;
}
void printStar(char** t, int x, int y, int n){
    if (n==3){
        // cout << x << " " << y << endl;
        t[x-2][y] = '*';

        t[x-1][y-1] = '*';
        t[x-1][y+1] = '*';

        t[x][y-2] = '*';
        t[x][y-1] = '*';
        t[x][y] = '*';
        t[x][y+1] = '*';
        t[x][y+2] = '*';
        return;
    }
    printStar(t, x-n/2, y, n/2);
    printStar(t, x, y-n/2, n/2);
    printStar(t, x, y+n/2, n/2);
}
void printTable(char** t, int n){
    for (int i=1; i<=n; i++){
        for (int j=1; j<=2*n; j++){
            cout << t[i][j];
        }
        cout << "\n";
    }
}
void INPUT(){
    int n; cin >> n;
    char** table = setMem(n);
    printStar(table, n, n, n);
    printTable(table, n);
    freeMem(table, n);
}

int main(){
    INIT();
    INPUT();
    return 0;
}