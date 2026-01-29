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

void INPUT(){
    cout.precision(2);
    cout << fixed;

    while (true){
        double n; cin >> n;
        if (!n) break;
        
        if (n == 1) cout << 5.00 << endl;
        else{
            cout << (1 - pow(n, 5)) / (1 - n) << endl;
        }
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