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

int** m1;
int** m2;
int** m3;
int** getMatrix(int r, int c){
    int** tmp = new int*[r];
    for (int i=0; i<r; i++){
        tmp[i] = new int[c];
        for (int j=0; j<c; j++){
            cin >> tmp[i][j];
        }
    }
    return tmp;
}
int** getAnswer(int r, int c, int m){
    int** tmp = new int*[r];
    for (int i=0; i<r; i++){
        tmp[i] = new int[c];
        fill_n(tmp[i], c, 0);
    }

    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            for (int k=0; k<m; k++){
                tmp[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    return tmp;
}
void freeMatrix(int** t, int s){
    for (int i=0; i<s; i++) delete[] t[i];
    delete[] t;
}
void printMatrix(int** t, int r, int c){
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            cout << t[i][j] << " ";
        }
        cout << endl;
    }
}
void INPUT(){
    int n, m, k;
    cin >> n >> m;
    m1 = getMatrix(n, m);
    cin >> m >> k;
    m2 = getMatrix(m, k);
    m3 = getAnswer(n, k, m);

    printMatrix(m3, n, k);

    freeMatrix(m1, n);
    freeMatrix(m2, m);
    freeMatrix(m3, n);
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}