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
    int n; cin >> n;
    int state = -1;
    int ans = 0;
    for (int i=0; i<n; i++){
        int tmp; cin >> tmp;
        if (state == -1 && tmp == 0){
            state = 1;
            ans++;
        }
        else if (state == 0 && tmp == 0){
            state = 1;
            ans++;
        }
        else if (state == 1 && tmp == 1){
            state = 2;
            ans++;
        }
        else if (state == 2 && tmp == 2){
            state = 0;
            ans++;
        }
    }
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