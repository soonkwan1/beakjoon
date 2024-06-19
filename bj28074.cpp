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
    string word; cin >> word;

    char w_list[5] = {'M', 'O', 'B', 'I', 'S'};
    bool flag[5]; fill_n(flag, 5, false);
    int ans = 0;
    for (int i=0; i<word.size(); i++){
        for (int j=0; j<5; j++){
            if (word[i] == w_list[j] && !flag[j]){
                ans++;
                flag[j] = true;
                break;
            }
        }
    }

    if (ans == 5) cout << "YES" << endl;
    else cout << "NO" << endl;
}
void SOLUTION(){
    
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}