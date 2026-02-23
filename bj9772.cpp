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
        double x, y; cin >> x >> y;
        if (!x && !y) break;
        else if (x > 0 && y > 0) cout << "Q1" << endl;
        else if (x < 0 && y > 0) cout << "Q2" << endl;
        else if (x < 0 && y < 0) cout << "Q3" << endl;
        else if (x > 0 && y < 0) cout << "Q4" << endl;
        else cout << "AXIS" << endl;
    }
    cout << "AXIS" << endl;
}
void SOLUTION(){
    
}

int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}