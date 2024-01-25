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
    int score_board[6]; fill_n(score_board, 6, 0);

    int ans_idx;
    int ans_val = -1;
    for (int i=1; i<=5; i++){
        int score = 0;
        for (int j=1; j<=4; j++){
            int temp; cin >> temp;
            score += temp;
        }

        if (score > ans_val){
            ans_val = score;
            ans_idx = i;
        }
    }
    
    cout << ans_idx << " " << ans_val << endl;
}

int main(){
    fastio;
    INPUT();
    return 0;
}