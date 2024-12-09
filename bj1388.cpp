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

int yCheck(char** table, int n, int m){
    int ret = 0;
    for (int i=0; i<m; i++){
        int state = 0;
        for (int j=0; j<n; j++){
            if (table[j][i] == '-') state = 0;
            else if (!state && table[j][i] == '|'){
                state = 1;
                ret++;
            }
        }
    }
    return ret;
}
int xCheck(char** table, int n, int m){
    int ret = 0;
    for (int i=0; i<n; i++){
        int state = 0;
        for (int j=0; j<m; j++){
            if (table[i][j] == '|') state = 0;
            else if (!state && table[i][j] == '-'){
                state = 1;
                ret++;
            }
        }
    }
    return ret;
}
void INPUT(){
    int n, m; cin >> n >> m;
    char** table = new char*[n];
    for (int i=0; i<n; i++){
        table[i] = new char[m];
        string line; cin >> line;
        for (int j=0; j<line.size(); j++){
            table[i][j] = line[j];
        }
    }

    int ans = yCheck(table, n, m) + xCheck(table, n, m);
    cout << ans << endl;

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