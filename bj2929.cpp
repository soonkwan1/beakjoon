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
    string line; cin >> line;
    int ans = 0;
    int cnt = 1;
    for (int i=1; i<line.size(); i++){
        int tmp = int(line[i]);
        if (tmp >= 65 && tmp < 91){
            while (cnt % 4 != 0){
                cnt++;
                ans++;
            }
        }
        cnt++;
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