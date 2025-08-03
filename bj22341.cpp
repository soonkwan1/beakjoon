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
    int n, t; cin >> n >> t;
    int r,c; r = n; c = n;
    for (int i=0; i<t; i++){
        int a, b; cin >> a >> b;
        if (a >= r || b >= c) continue;

        // 가로 위
        int r1 = a; int c1 = c;
        int m1 = r1 * c1;
        // 세로 왼
        int r2 = r; int c2 = b;
        int m2 = r2 * c2;

        // cout << "row : " << r << ", col : " << c << endl;
        // cout << r1 << " " << c1 << " " << m1 << endl;
        // cout << r2 << " " << c2 << " " << m2 << endl;

        if (m1 >= m2){
            r = r1; c = c1;
        }
        else{
            r = r2; c = c2;
        }

    }    
    cout << r * c << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}