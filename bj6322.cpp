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

void printAns(double tmp, int state, int cnt){
    cout << "Triangle #" << cnt << endl;
    if (state == 1) cout << "a = " << tmp << endl;
    else if (state == 2) cout << "b = " << tmp << endl;
    else if (state == 3) cout << "c = " << tmp << endl;
    else cout << "Impossible." << endl;
    
}
void INPUT(){
    cout.precision(3);
        cout << fixed;
    int cnt = 1;
    while (true){
        double a, b, c; cin >> a >> b >> c;
        if (!a && !b && !c) break;
        
        int state;
        if (a == -1){
            if (b >= c) state = 0;
            else{
                state = 1;
                printAns(sqrt(c * c - b * b), state, cnt);
            }
        }
        else if (b == -1){
            if (a >= c) state = 0;
            else{
                state = 2;
                printAns(sqrt(c * c - a * a), state, cnt);
            }
        }
        else if (c == -1){
            state = 3;
            printAns(sqrt(a * a + b * b), state, cnt);
        }

        if (!state) printAns(0, state, cnt);
        cnt++;
        cout << endl;
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