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
        string line; getline(cin, line);
        if (line == "#") break;

        int cnt = 0;
        int ans = 0;
        for (int i=0; i<line.size(); i++){
            cnt++;
            if (line[i] == ' ') continue;
            ans += cnt * (int(line[i]) - 64);
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