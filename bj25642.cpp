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
    int a, b; cin >> a >> b;
    int state = 0;
    while (true){
        if (a >= 5){
            cout << "yj" << endl;
            break;
        }
        else if (b >= 5){
            cout << "yt" << endl;
            break;
        }

        if (state) {
            a += b;
            state = 0;
        }
        else {
            b += a;
            state = 1;
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