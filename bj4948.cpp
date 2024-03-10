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
#define LIMIT 123456

int isPrime[LIMIT * 2 + 1];
int primeSum[LIMIT * 2 + 1];
void INPUT(){
    fill_n(isPrime, LIMIT * 2 + 1, 1); isPrime[0] = isPrime[1] = 0;
    for (int i=2; i<=LIMIT; i++){
        if (!isPrime[i]) continue;
        for (int j=i*2; j<=LIMIT * 2; j += i){
            isPrime[j] = 0;
        }
    }
    
    fill_n(primeSum, LIMIT * 2 + 1, 0);
    for (int i=1; i<=LIMIT*2; i++){
        primeSum[i] = primeSum[i-1] + isPrime[i];
    }
}
void SOLUTION(){
    int start;
    while (true){
        cin >> start;
        if (!start) break;
        cout << primeSum[start * 2] - primeSum[start] << endl;
    }
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}