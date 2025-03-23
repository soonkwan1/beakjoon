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

int getGCD(int a, int b){
    if (b > a) swap (a, b);

    while (b != 0){
        int tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}
void INPUT(){
    int t; cin >> t;
    while (t--){
        int a, b; cin >> a >> b;
        int tmp = getGCD(a, b);
        cout << a * b / tmp << " " << tmp << endl;
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