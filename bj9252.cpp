#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#define ll long long
#define INF 98765432101
#define endl "\n"
using namespace std;

void INIT() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
void printDP(int** dp, int x, int y, string word1, string word2) {
    if (dp[x][y] == 0) return;

    if (word1[x - 1] == word2[y - 1]) {
        printDP(dp, x - 1, y - 1, word1, word2);
        cout << word1[x - 1];
    }
    else dp[x][y - 1] >= dp[x - 1][y] ? printDP(dp, x, y - 1, word1, word2) : printDP(dp, x - 1, y, word1, word2);
    
}
void INPUT() {
    string word1, word2; cin >> word2 >> word1;
    int row = word1.size() + 1; int col = word2.size() + 1;
    int** dp = new int*[row];
    for (int i = 0; i < row; i++) {
        dp[i] = new int[col];
        fill_n(dp[i], col, 0);
    }
    deque<int> ans;

    if (word1[0] == word2[0]) dp[1][1] = 1;

    for (int i = 1; i < row; i++) {
        for (int j = 1; j < col; j++) {
            if (word1[i - 1] == word2[j - 1]) dp[i][j] = dp[i-1][j-1] + 1;
            else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    cout << dp[row - 1][col - 1] << endl;;
    printDP(dp, row - 1, col - 1, word1, word2);

    for (int i = 0; i < word1.size(); i++) delete[] dp[i];
    delete[] dp;
}

int main() {
    INIT();
    INPUT();
    return 0;
}

// 1, 2, 3, 4, 5, ...
// y-1, y+1 로 도착
