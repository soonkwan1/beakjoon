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

int n;
int** t;
int ans[4];
void getTable(){
    t = new int*[n];
    for (int i=0; i<n; i++){
        t[i] = new int[n];
        for (int j=0; j<n; j++){
            cin >> t[i][j];
        }
    }
}
void freeTable(){
    for (int i=0; i<n; i++) delete[] t[i];
    delete[] t;
}
int regress(int x, int y, int k){
    if (k == 1){
        return t[x][y];
    }

    int tmp[4] = {0, 0, 0, 0};
    for (int i=x; i<x+k; i+=k/3){
        for (int j=y; j<y+k; j+=k/3){
            int ret = regress(i, j, k / 3) + 1;
            // cout << ret << " ";
            tmp[ret]++;
        }
    }

    if (tmp[0] == 9) return -1;
    else if (tmp[1] == 9) return 0;
    else if (tmp[2] == 9) return 1;
    
    for (int i=0; i<3; i++){
        ans[i] += tmp[i];
    }
    return 2;
}
void INPUT(){
    cin >> n;
    for (int i=0; i<3; i++){
        ans[i] = 0;
    }
    getTable();

    int k = regress(0, 0, n) + 1;
    if (k != 3) ans[k]++;
    for (int i=0; i<3; i++){
        cout << ans[i] << endl;
    }

    freeTable();
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}