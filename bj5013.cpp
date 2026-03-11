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
    int ans = 0;
    while (n--){
        string line; cin >> line;
        bool flag = 0;
        for (int i=0; i<line.size() - 1; i++){
            if (line[i] == 'C' && line[i+1] == 'D'){
                flag = 1;
                break;
            }
        }

        if (!flag) ans++;
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