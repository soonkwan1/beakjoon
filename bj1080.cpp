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
char** getMatrix(int n, int m){
    char** A = new char*[n];
    for (int i=0; i<n; i++){
        A[i] = new char[m];
        string line; cin >> line;
        for (int j=0; j<m; j++){
            A[i][j] = line[j];
        }
    }
    return A;
}
void freeMem(char** t, int n){
    for (int i=0; i<n; i++) delete[] t[i];
    delete[] t;
}
void reverseMatrix(char** t, int x, int y){
    for (int i=x; i<x+3; i++){
        for (int j=y; j<y+3; j++){
            if (t[i][j] == '0') t[i][j] = '1';
            else t[i][j] = '0';
        }
    }
}
int isSameMatrix(char** t1, char** t2, int n, int m){
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (t1[i][j] != t2[i][j]) return 0;
        }
    }
    return 1;
}
void INPUT(){
    int n, m; cin >> n >> m;
    char** A = getMatrix(n, m);
    char** B = getMatrix(n, m);
    
    if (n < 3 && m < 3){
        if (isSameMatrix(A, B, n, m)){
            cout << 0 << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
    else{
        int ans = 0;
        for (int i=0; i<=n-3; i++){
            for (int j=0; j<=m-3; j++){
                if (A[i][j] != B[i][j]) {
                    reverseMatrix(A, i, j);
                    ans++;
                }
            }
        }
        if (isSameMatrix(A, B, n, m)) cout << ans << endl;
        else cout << -1 << endl;
    }


    freeMem(A, n);
    freeMem(B, n);
}

int main(){
    INIT();
    INPUT();
    return 0;
}