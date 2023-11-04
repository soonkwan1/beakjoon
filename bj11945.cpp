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
void freeMem(char** t, int n){
    for (int i=0; i<n; i++) delete[] t[i];
    delete[] t;
}
void printTable(char** t, int n, int m){
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout << t[i][j];
        }
        cout << endl;
    }
}
void INPUT(){
    int n, m; cin >> n >> m;
    char** table = new char*[n];
    for (int i=0; i<n; i++){
        table[i] = new char[m];
        string line; cin >> line;
        for (int j=0; j<m; j++){
            table[i][j] = line[line.size() - 1 - j];
        }
    }
    printTable(table, n, m);
    freeMem(table, n);
}



int main(){
    INIT();
    INPUT();
    return 0;
}