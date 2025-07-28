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

int getAnswer(int n){
    if (n == 1) return 0;
    int ret = 1;
    for (int i=2; i<=sqrt(n); i++){
        if (n % i == 0){
            if (n / i == i) ret += i;
            else ret += i + n / i;
        }
    }
    
    if (ret == n) return 1;
    else if (ret > n) return 2;
    return 0;
}

void INPUT(){
    int t; cin >> t;
    while (t--){
        int tmp; cin >> tmp;
        int res = getAnswer(tmp);
        if (res == 2) cout << "Abundant" << endl;
        else if (res == 1) cout << "Perfect" << endl;
        else cout << "Deficient" << endl;
    }
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}