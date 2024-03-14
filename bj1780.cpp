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
int ans[3];
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
void regress(int x, int y, int k){
    if (k == 1){
        ans[t[x][y] + 1]++;
        return;
    }

    
}
void INPUT(){
    cin >> n;
    fill_n(ans, 3, 0);
    getTable();



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