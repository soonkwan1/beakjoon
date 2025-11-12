#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m; cin >> n >> m;

  vector<int> money(n + m + 1, 0);

  for (int i = 1; i <= n; i++)
    cin >> money[i];

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n + m; j++) {
      int tmp; cin >> tmp;
      money[i] -= tmp;
      money[j] += tmp;
    }
  }

  for (int i = 1; i <= n + m; i++)
    cout << money[i] << " ";
  cout << "\n";

  return 0;
}
