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
    string word; cin >> word;
    int bonus = 0;
    int ans = 0;
    for (int i=0; i<word.size(); i++){
        if (word[i] == 'O'){
            ans += i + 1 + bonus;
            bonus++;
        }
        else {
            bonus = 0;
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