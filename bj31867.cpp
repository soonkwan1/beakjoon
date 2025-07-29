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
    int n; string line;
    cin >> n >> line;

    int odd = 0;
    int even = 0;
    for (int i=0; i<line.size(); i++){
        int tmp = int(line[i]) - 48;
        if (tmp % 2 == 0) even++;
        else odd++;
    }
    if (odd < even) cout << 0 << endl;
    else if (odd > even) cout << 1 << endl;
    else cout << -1 << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}