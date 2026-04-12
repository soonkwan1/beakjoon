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
    int t1, v1, t2, v2; cin >> t1 >> v1 >> t2 >> v2;
    if (t2 < 0 && v2 >= 10){
        cout << "A storm warning for tomorrow! Be careful and stay home if possible!" << endl;
    }
    else if (t2 < t1){
        cout << "MCHS warns! Low temperature is expected tomorrow." << endl;
    }
    else if (v2 > v1){
        cout << "MCHS warns! Strong wind is expected tomorrow." << endl;
    }
    else cout << "No message" << endl;
}
void SOLUTION(){
    
}

int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}