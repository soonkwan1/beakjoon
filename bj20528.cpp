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
    n--;
    string first; cin >> first;
    char f = first[0];

    int flag = 1;
    while (n--){
        string tmp; cin >> tmp;
        if (tmp[0] != f) {
            flag = 0;
            break;
        }
    }

    if (flag) cout << 1 << endl;
    else cout << 0 << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}