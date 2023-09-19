#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
int** intAlloc(int n){
    int** tmp = new int*[n];
    for (int i=0; i<n; i++){
        tmp[i] = new int[n];
        for (int j=0; j<n; j++){
            cin >> tmp[i][j];
        }
    }
    return tmp;
}
void freeIntMem(int** t, int n){
    for (int i=0; i<n; i++){
        delete[] t[i];
    }
    delete[] t;
}
int isSame(int** t, pair<int, int> start, pair<int, int> end){
    int res = t[start.first][start.second];
    for (int i=start.first; i<end.first; i++){
        for (int j=start.second; j<end.second; j++){
            if (t[i][j] != res){
                return -1;
            }
        }
    }
    return res;
}
void dfs(int** table, pair<int, int> start, pair<int, int> end, int* blue, int* white, int n){
    int res = isSame(table, start, end);
    if (res == 1) {
        (*blue)++;
        return;
    }
    else if (res == 0 ) {
        (*white)++;
        return;
    }

    int ref = n/2;
    // 1
    dfs(table, make_pair(start.first, start.second), make_pair(end.first - ref, end.second - ref), blue, white, ref);
    // 2
    dfs(table, make_pair(start.first + ref, start.second), make_pair(end.first, end.second - ref), blue, white, ref);
    // 3 
    dfs(table, make_pair(start.first, start.second + ref), make_pair(end.first - ref, end.second), blue, white, ref);
    // 4
    dfs(table, make_pair(start.first + ref, start.second + ref), make_pair(end.first, end.second), blue, white, ref);
    

}
void INPUT(){
    int n, blue, white;
    cin >> n;
    int** table = intAlloc(n);
    blue = white = 0;
    dfs(table, make_pair(0, 0), make_pair(n, n), &blue, &white, n);
    cout << white << "\n";
    cout << blue << "\n";
    freeIntMem(table, n);
}
int main(){
    INIT();
    INPUT();
    return 0;
}
