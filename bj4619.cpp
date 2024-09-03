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
        double n, b; cin >> b >> n;
        if (!n && !b) break;

        int minD = 0x3f3f3f3f;
        int minVal = 0x3f3f3f3f;
        for(int a = 1; pow(a,n) <= 2000000; a++) {
            int diff = abs(pow(a,n) - b);
            if(diff < minD) minD = diff, minVal = a;
        }
        cout << minVal << '\n';
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