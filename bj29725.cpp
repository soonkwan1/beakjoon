#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  char pieces[] = {'K', 'P', 'N', 'B', 'R', 'Q',
                 'k', 'p', 'n', 'b', 'r', 'q'};
  int scores[] = {0, 1, 3, 3, 5, 9, 0, -1, -3, -3, -5, -9};

  char board[8][9];
  for (int i = 0; i < 8; i++)
    cin >> board[i];

  int totalScore = 0;
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      for (int k = 0; k < 12; k++) {
        if (board[i][j] == pieces[k]) {
          totalScore += scores[k];
          break ;
        }
      }
    }
  }

  cout << totalScore << "\n";

  return 0;
}
