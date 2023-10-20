#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <list>
#define ll long long
#define inf 98765432101
#define endl "\n"
using namespace std;

struct Data {
    int cost;
    int memory;
};
void init() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
struct CompMin {
    bool operator() (const Data& a, const Data& b) const {
        if (a.cost != b.cost) return a.cost < b.cost;
        return a.memory < b.memory;
    }
};
void freeMem(int** t, int n) {
    for (int i = 0; i < n; i++) delete[] t[i];
    delete[] t;
}
void INPUT() {
    int n, m; cin >> n >> m;
    Data* pg = new Data[n];
    vector<Data> l;
    l.push_back({ 0,0 });

    int tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        pg[i].memory = tmp;
    }
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        pg[i].cost = tmp;
    }
    
    for (int i = 0; i < n; i++) {
        if (pg[i].cost == 0) {
            m -= pg[i].memory;
        }
        else {
            l.push_back(pg[i]);
        }
    }
    delete[] pg;

    if (m <= 0) {
        cout << 0 << endl;
        return;
    }

    sort(l.begin(), l.end(), CompMin());
    
    int** dp = new int*[10001];
    for (int i = 0; i <= 10000; i++) {
        dp[i] = new int[l.size()];
        fill_n(dp[i], l.size(), 0);
    }

    int flag = 0;
    for (int i = 1; i <= 10000; i++) {
        for (int j = 1; j < l.size(); j++) {
            if (i - l[j].cost < 0) dp[i][j] = dp[i][j - 1];
            else dp[i][j] = max(dp[i - l[j].cost][j - 1] + l[j].memory, 
                dp[i][j - 1]);

            if (dp[i][j] >= m) {
                cout << i << endl;
                flag = 1;
                break;
            }
        }

        if (flag) break;
    }

    freeMem(dp, 10001);
}

int main() {
    init();
    INPUT();
    return 0;
}

/*
5 60
30 10 20 35 40
3 0 3 5 4
*/
