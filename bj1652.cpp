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
char** setMem(int n){
    char** table = new char*[n];
    for (int i=0; i<n; i++){
        table[i] = new char[n];
        string line; cin >> line;
        for (int j=0; j<n; j++){
            table[i][j] = line[j];
        }   
    }
    return table;
}
void freeMem(char** t, int n){
    for (int i=0; i<n; i++) delete[] t[i];
    delete[] t;
}
void INPUT(){
    int n; cin >> n;
    char** table = setMem(n);

    int row_cnt = 0;
    int col_cnt = 0;
    for (int i=0; i<n; i++){
        int row_check = 0;
        int col_check = 0;

        for (int j=0; j<n; j++){
            if (table[i][j] == '.'){
                row_check++;
            }
            else{
                if (row_check >= 2) row_cnt++;
                row_check = 0;
            }
        }
        if (row_check >= 2) row_cnt++;

        for (int j=0; j<n; j++){
            if (table[j][i] == '.'){
                col_check++;
            }
            else{
                if (col_check >= 2) col_cnt++;
                col_check = 0;
            }
        }
        if (col_check >= 2) col_cnt++;
    }

    cout << row_cnt << " " << col_cnt << endl;

    freeMem(table, n);
}

int main(){
    INIT();
    INPUT();
    return 0;
}

/*
6
....X.
..XX..
......
..XX..
X.....
..X..X
*/