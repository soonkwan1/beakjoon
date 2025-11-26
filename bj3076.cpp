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

void getFill(char** table, int r, int c, int a, int b){
    for (int i=r; i<r+a; i++){
        for (int j=c; j<c+b; j++){
            table[i][j] = '.';
        }
    }
}

void INPUT(){
    int r, c, a, b; cin >> r >> c >> a >> b;
    char** table = new char*[r * a];
    for (int i=0; i<r*a; i++){
        table[i] = new char[c * b];
        for (int j=0; j<c*b; j++){
            table[i][j] = 'X';
        }
    }

    int state;
    int cnt = 0;
    for (int i=0; i<r*a; i+=a){
        if (cnt % 2 == 0) state = 0;
        else state = 1;
        cnt++;

        for (int j=0; j<c*b; j+=b){
            if (!state) state = 1;
            else{
                getFill(table, i, j, a, b);
                state = 0;
            }
        }
    }

    for (int i=0; i<r*a; i++){
        for (int j=0; j<c*b; j++){
            cout << table[i][j];
        }
        cout << endl;
    }

    for (int i=0; i<r*a; i++) delete[] table[i];
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