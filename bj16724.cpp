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
void printTable(char** t, int n, int m){
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++) cout << t[i][j] << " ";
        cout << endl;
    }
}
void freeMem(char** t, int n){
    for (int i=0; i<n; i++) delete[] t[i];
    delete[] t;
}
void freeMemInt(int** t, int n){
    for (int i=0; i<n; i++) delete[] t[i];
    delete[] t;
}
void dfs(char** mirro, int** people, int x, int y, int cnt, int& ans){
    people[x][y] = cnt;
    // cout << x << " " << y << endl;

    if (mirro[x][y] == 'U'){
        if (people[x-1][y]) {
            if (people[x-1][y] != people[x][y]){
                ans--;
            }
            return;
        }
        dfs(mirro, people, x - 1, y, cnt, ans);
    }
    else if (mirro[x][y] == 'D'){
        if (people[x+1][y]) {
            if (people[x+1][y] != people[x][y]){
                ans--;
            }
            return;
        }
        dfs(mirro, people, x + 1, y, cnt, ans);
    }
    else if (mirro[x][y] == 'L'){
        if (people[x][y-1]) {
            if (people[x][y-1] != people[x][y]){
                ans--;
            }
            return;
        }
        dfs(mirro, people, x, y - 1, cnt, ans);
    }
    else if (mirro[x][y] == 'R'){
        if (people[x][y+1]){
            if (people[x][y+1] != people[x][y]){
                ans--;
            }
            return;
        }
        dfs(mirro, people, x, y + 1, cnt, ans);
    }
}
void INPUT(){
    int n, m; cin >> n >> m;
    char** mirro = new char*[n];
    int** people = new int*[n];
    for (int i=0; i<n; i++){
        mirro[i] = new char[m];
        people[i] = new int[m]; fill_n(people[i], m, 0);
        string line; cin >> line;
        for (int j=0; j<m; j++){
            mirro[i][j] = line[j];
        }
    }
    
    int cnt = 0;
    int ans = 0;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (people[i][j] == 0){
                cnt++;
                ans++;
                dfs(mirro, people, i, j, cnt, ans);
            }
        }
    }

    cout << ans << endl;

    freeMemInt(people, n);
    freeMem(mirro, n);
}

int main(){
    INIT();
    INPUT();
    return 0;
}