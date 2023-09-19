#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <set>
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
char** setMem(int n){
    char** table = new char*[n];
    for (int i=0; i<n; i++) table[i] = new char[2*n-1];
    for (int i=0; i<n; i++){
        for (int j=0; j<2*n-1; j++){
            table[i][j] = ' ';
        }
    }
    return table;
}
void freeMem(char** t, int n){
    for (int i=0; i<n; i++){
        delete[] t[i];
    }
    delete[] t;
}
void INPUT(){
    int n; cin >> n;
    
}

int main(){
    INIT();
    INPUT();
    return 0;
}