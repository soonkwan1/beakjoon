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
long long** mulM(long long** m1, long long** m2){
    long long** temp = new long long*[2];
    for (int i=0; i<2; i++) temp[i] = new long long[2];
    temp[0][0] = ((m1[0][0] * m2[0][0]) % MOD + (m1[0][1] * m2[1][0]) % MOD) % MOD;
    temp[0][1] = ((m1[0][0] * m2[0][1]) % MOD + (m1[0][1] * m2[1][1]) % MOD) % MOD;
    temp[1][0] = ((m1[1][0] * m2[0][0]) % MOD + (m1[1][1] * m2[1][0]) % MOD) % MOD;
    temp[1][1] = ((m1[1][0] * m2[0][1]) % MOD + (m1[1][1] * m2[1][1]) % MOD) % MOD;
    return temp;
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

}

int main(){
    INIT();
    INPUT();
    return 0;
}