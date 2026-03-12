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
    int a1, b1; cin >> a1 >> b1;
    int b2, a2; cin >> b2 >> a2;
    int a = a1 + a2;
    int b = b1 + b2;
    if (a > b) cout << "Persepolis" << endl;
    else if (b > a) cout << "Esteghlal" << endl;
    else {
        if (b1 > a2) cout << "Esteghlal" << endl;
        else if (a2 > b1) cout << "Persepolis" << endl;
        else cout << "Penalty" << endl;
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