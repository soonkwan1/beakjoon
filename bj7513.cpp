#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <unordered_set>
#include <unordered_map>
#define ll long long
#define INF 98765432101
#define endl "\n"
using namespace std;
#define fastio cin.tie(NULL), cout.tie(NULL), ios_base::sync_with_stdio(false);

void INPUT() {
    int t; cin >> t;
    int cnt = 1;
    while (t--) {
        int n; cin >> n;
        vector<string> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        vector<string> sente;
        int k; cin >> k;
        for (int i = 0; i < k; i++) {
            int tmp; cin >> tmp;
            string ans = "";
            for (int j = 0; j < tmp; j++) {
                int sn; cin >> sn;
                ans += v[sn];
            }
            sente.push_back(ans);
        }

        cout << "Scenario #" << cnt++ << ":" << endl;
        for (int i = 0; i < sente.size(); i++) cout << sente[i] << endl;
        cout << endl;
    }
}

int main() {
    fastio;
    INPUT();
    return 0;
} 
