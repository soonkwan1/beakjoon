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
    while (true){
        int a, b, c; cin >> a >> b >> c;
        if (!a && !b && !c) break;

        if (b - a == c -b){
            cout << "AP " << c + c - b << endl;
        }
        else{
            cout << "GP " << c * (b / a) << endl;
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