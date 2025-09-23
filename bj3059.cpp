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
    while (n--){
        unordered_map<int, int> um;
        string line; cin >> line;
        for (int i=0; i<line.size(); i++){
            um[int(line[i])]++;
        }

        int ans = 0;
        for (int i=65; i<91; i++){
            if (!um[i]) ans += i;
        }
        cout << ans << endl;
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