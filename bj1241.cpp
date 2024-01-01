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

int getNum(int n, int* um) {
    int tmp = 0;

    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            tmp += um[i];
            if (n / i != i) tmp += um[n / i];
        }
    }

    return tmp - 1;
}

void INPUT() {
    int n; cin >> n;
    vector<int> v;

    int mx = 0;
    for (int i = 0; i < n; i++) {
        int tmp; cin >> tmp;
        mx = max(mx, tmp);
        v.push_back(tmp);
    }
    int* num_l = new int[mx + 1];
    fill_n(num_l, mx + 1, 0);
    for (int i = 0; i < n; i++) {
        num_l[v[i]]++;
    }

    for (int i = 0; i < n; i++) {
        cout << getNum(v[i], num_l) << endl;
    }

    delete[] num_l;
}

int main() {
    fastio;
    INPUT();
    return 0;
}
