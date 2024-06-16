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

int n, flag;
char** table;
char** ans;

void INPUT(){
    cin >> n;
    table = new char*[n];
    ans = new char*[n];

    for (int i=0; i<n; i++){
        table[i] = new char[n];
        ans[i] = new char[n];
        string word; cin >> word;
        for (int j=0; j<n; j++){
            table[i][j] = word[j];
            ans[i][j] = ' ';
        }
    }
    cin >> flag;
}
void delMem(){
    for (int i=0; i<n; i++){
        delete[] table[i];
        delete[] ans[i];
    }
    delete[] table;
    delete[] ans;
}
void printTable(char** tmp){
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout << tmp[i][j];
        }
        cout << endl;
    }
}
void swapTable(){
    if (flag == 2){
        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                ans[i][j] = table[i][n - 1 - j];
            }
        }
    }
    else if (flag == 3){
        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                ans[i][j] = table[n - 1 - i][j];
            }
        }
    }
}
void SOLUTION(){
    if (flag == 1) printTable(table);
    else {
        swapTable();
        printTable(ans);
    }
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}