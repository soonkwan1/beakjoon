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

#define MAX 987654321

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
void printTable(int** t, int n){
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout << t[i][j] << " ";
        }
        cout << "\n";
    }
}
void reviseTable(int** t, int n){
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (t[i][j] == MAX){
                t[i][j] = 0;
            }
        }
    }
}
void INPUT(){
    int n, m; cin >> n >> m;
    int** table = new int*[n];
    for (int i=0; i<n; i++){
        table[i] = new int[n];
        fill_n(table[i], n, MAX);
        table[i][i] = 0;
    }

    for (int i=0; i<m; i++){
        int start, end, cost; cin >> start >> end >> cost;
        if (table[start-1][end-1] > cost){
            table[start-1][end-1] = cost;
        }
    }

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            for (int k=0; k<n; k++){
                if (table[j][i] + table[i][k] < table[j][k]){
                    table[j][k] = table[i][k] + table[j][i];
                }
            }
        }
    }

    reviseTable(table, n);
    printTable(table, n);

    for (int i=0; i<n; i++){
        delete[] table[i];
    }
    delete[] table;
}

int main(){
    INIT();
    INPUT();
    return 0;
}