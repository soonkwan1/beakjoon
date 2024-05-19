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

void RSP(char c1, char c2, int& p1, int& p2){
    if (c1 == 'R' && c2 == 'P') p2++;
    else if (c1 == 'P' && c2 == 'S') p2++;
    else if (c1 == 'S' && c2 == 'R') p2++;
    else if (c2 == 'R' && c1 == 'P') p1++;
    else if (c2 == 'P' && c1 == 'S') p1++;
    else if (c2 == 'S' && c1 == 'R') p1++;
}
void INPUT(){
    int t; cin >> t;
    
    while (t--){
        int n; cin >> n;
        int p1 = 0, p2 = 0;
        for (int i=0; i<n; i++){
            char c1, c2; cin >> c1 >> c2;
            RSP(c1, c2, p1, p2);
        }
        
        if (p1 == p2) cout << "TIE" << endl;
        else if (p1 > p2) cout << "Player 1" << endl;
        else cout << "Player 2" << endl;
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