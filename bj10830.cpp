#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <set>
#define MOD 1000
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
long long** mulM(long long** m1, long long** m2, int n){
    long long** temp = new long long*[n];
    for (int i=0; i<n; i++) temp[i] = new long long[n];
    
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            for (int k=0; k<n; k++){
                temp[i][j] += (m1[i][k] % 1000 * m2[k][j] % 1000) % 1000;
            }
        }
    }
    
    return temp;
}
long long** diviedAndConquer(long long n, long long** ref, long long** init, int m){
    if (n==1) return ref;

    long long** tmp = diviedAndConquer(n/2, ref, init, m);
    if (n % 2 == 0){    
        ref = mulM(tmp, tmp, m);
    }
    else{
        ref = mulM(mulM(tmp, tmp, m), init, m);
    }
    return ref;
}
void delMem(long long** t, int n){
    for (int i=0; i<n; i++) delete[] t[i];
    delete[] t;
}
void printMa(long long** t, int n){
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout << t[i][j] % 1000 << " ";
        }
        cout << "\n";
    }
}
void INPUT(){
    long long n, b; cin >> n >> b;
    long long** ma = new long long*[n];
    long long** init = new long long*[n];
    for (int i=0; i<n; i++){
        ma[i] = new long long[n];
        init[i] = new long long[n];
        for (int j=0; j<n; j++){
            cin >> ma[i][j];
            init[i][j] = ma[i][j];
        }
    }
    
    
    printMa(ma = diviedAndConquer(b, ma, init, n), n);

    delMem(init, n);
    delMem(ma, n);
}

int main(){
    INIT();
    INPUT();
    return 0;
}