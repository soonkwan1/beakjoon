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
    int list[13] = {9, 7, 8, 0, 9, 2, 1, 4, 1, 8};
    cin >> list[10] >> list[11] >> list[12];

    int state = 0;
    int ans = 0;
    for (int i=0; i<13; i++){
        if (!state){
            ans += list[i] * 1;
            state = 1;
        }
        else if (state){
            ans += list[i] * 3;
            state = 0;
        }
    }
    cout << "The 1-3-sum is ";
    cout << ans << endl;
}
void SOLUTION(){
    
}

int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}