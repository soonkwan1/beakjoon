#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <set>
#define endl "\n"
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
int** setMem(int n){
    int** tmp = new int*[n+1];
    for (int i=0; i<=n; i++){
        tmp[i] = new int[n+1];
    }

    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            cin >> tmp[i][j];
        }
    }
    return tmp;
}
void freeMem(int** t, int n){
    for (int i=0; i<=n; i++) delete[] t[i];
    delete[] t;
}
void INPUT(){
    int n; cin >> n;
    int* dp = new int[pow(2, n)];
    int** table = setMem(n);
    fill_n(dp, pow(2,n), 0);

    

    freeMem(table, n);
    delete[] dp;
}

int main(){
    INIT();
    INPUT();
    return 0;
}