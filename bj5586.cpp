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
    int ans1 = 0, ans2 = 0;
    for (int i=0; i<word.size()-2; i++){
        if (word[i] == 'J' && word[i+1] == 'O' && word[i+2] == 'I'){
            ans1++;
        }
        if (word[i] == 'I' && word[i+1] == 'O' && word[i+2] == 'I'){
            ans2++;
        }
    }
    cout << ans1 << endl << ans2 << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}