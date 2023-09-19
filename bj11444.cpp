#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <set>
#define MOD 1000000007
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
pair<pair<int,int>, pair<int,int> > mulMatrix(int** m1, int** m2){
    int a = ((m1[0][0] * m2[0][0]) % MOD + (m1[0][1] * m2[1][0]) % MOD) % MOD;
    int b = ((m1[0][0] * m2[0][1]) % MOD + (m1[0][1] * m2[1][1]) % MOD) % MOD;
    int c = ((m1[1][0] * m2[0][0]) % MOD + (m1[1][1] * m2[1][0]) % MOD) % MOD;
    int d = ((m1[1][0] * m2[0][1]) % MOD + (m1[1][1] * m2[1][1]) % MOD) % MOD;
    
    return make_pair(make_pair(a,b), make_pair(c, d));
}
long long** mulM(long long** m1, long long** m2){
    long long** temp = new long long*[2];
    for (int i=0; i<2; i++) temp[i] = new long long[2];
    temp[0][0] = ((m1[0][0] * m2[0][0]) % MOD + (m1[0][1] * m2[1][0]) % MOD) % MOD;
    temp[0][1] = ((m1[0][0] * m2[0][1]) % MOD + (m1[0][1] * m2[1][1]) % MOD) % MOD;
    temp[1][0] = ((m1[1][0] * m2[0][0]) % MOD + (m1[1][1] * m2[1][0]) % MOD) % MOD;
    temp[1][1] = ((m1[1][0] * m2[0][1]) % MOD + (m1[1][1] * m2[1][1]) % MOD) % MOD;
    return temp;
}
void printPoint(pair<pair<int,int>, pair<int,int> > m){
    cout << m.first.first << " ";
    cout << m.first.second << "\n";
    cout << m.second.first << " ";
    cout << m.second.second << "\n";
}
void printP(long long** a){
    for (int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
long long** diviedAndConquer(long long n, long long** ref, long long** init){
    if (n==1) return ref;

    long long** tmp = diviedAndConquer(n/2, ref, init);
    if (n % 2 == 0){    
        ref = mulM(tmp, tmp);
    }
    else{
        ref = mulM(mulM(tmp, tmp), init);
    }
    return ref;
}
void INPUT(){
    long long n; cin >> n;
    long long** ref = new long long*[2]; long long** init = new long long*[2];
    for (int i=0; i<2; i++) ref[i] = new long long[2];
    for (int i=0; i<2; i++) init[i] = new long long[2];
    init[0][0] = ref[0][0] = 1; init[0][1] = ref[0][1] = 1; init[1][0] = ref[1][0] = 1; init[1][1] =  ref[1][1] = 0;

    ref = diviedAndConquer(n, ref, init);

    // printP(ref);
    cout << ref[0][1] << "\n";
    
    for (int i=0; i<2; i++) {
        delete[] ref[i];
        delete[] init[i];
    }
    delete[] init;
    delete[] ref;
}

int main(){
    INIT();
    INPUT();
    return 0;
}