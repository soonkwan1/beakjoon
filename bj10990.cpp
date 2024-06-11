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

char** table;
int n;
void printTable(){
    for (int i=0; i<n; i++){
        int flag = 0;
        for (int j=0; j<(2 * n -1); j++){
            if (flag == 2) break;
            
            cout << table[i][j];
            if (i==0 && j == n-1) break;

            if (table[i][j] == '*') flag++;
        }
        cout << endl;
    }
}
void INPUT(){
    cin >> n;
    table = new char*[n];
    for (int i=0; i<n; i++){
        table[i] = new char[2 * n - 1];
        for (int j=0; j<2*n-1; j++){
            table[i][j] = ' ';
        }
    }
    
    table[0][n-1] = '*';
    int left = n - 2, right = n;
    for (int i=1; i<n; i++){
        table[i][left] = '*', table[i][right] = '*';
        left--, right++;
    }

    printTable();

    for (int i=0; i<n; i++) delete[] table[i];
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