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

int addDigit(int n){
    int tmp = 0;
    while (n >= 10){
        while (n != 0){
            tmp += n % 10;
            n /= 10;
        }
        n = tmp;
        tmp = 0;
    }
    return n;
}

void INPUT(){
    while (true){
        int n; cin >> n;
        if (!n) break;
        cout << addDigit(n) << endl;
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