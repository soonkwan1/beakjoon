#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int bestW = 0, bestC = 1;
    for (int i = 0; i < n; i++) {
      int w, c; cin >> w >> c;
      int left = w * bestC;
      int right = bestW * c;
      if (left > right || (left == right && c < bestC)) {
        bestW = w;
        bestC = c;
      }
    }
    cout << bestC << "\n";
  }

  return 0;
}
