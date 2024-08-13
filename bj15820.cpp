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
    int s1, s2; cin >> s1 >> s2;
    int state = 0;
    for (int i=0; i<s1; i++){
        int t1, t2; cin >> t1 >> t2;
        if (t1 != t2) state = 1;
    }
    for (int i=0; i<s2; i++){
        int t1, t2; cin >> t1 >> t2;
        if (t1 != t2) state = 2;
    }
    if (state == 0) cout << "Accepted" << endl;
    else if (state == 1) cout << "Wrong Answer" << endl;
    else if (state == 2) cout << "Why Wrong!!!" << endl;
}
void SOLUTION(){
    
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}