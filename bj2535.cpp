#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <set>
#define endl "\n"
#define ll long long
using namespace std;

struct Data {
    int country;
    int id;
    int score;
};

void INIT() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
struct compMin {
    bool operator() (const Data& a, const Data& b) const {
        return a.score > b.score;
    }
};
void INPUT() {
    int n; cin >> n;
    vector<Data> reg;
    int* medal = new int[n + 1]; fill_n(medal, n + 1, 0);
    for (int i = 0; i < n; i++) {
        int country, id, score; cin >> country >> id >> score;
        reg.push_back({ country, id, score });
    }
    sort(reg.begin(), reg.end(), compMin());

    int rank = 0;
    for (int i = 0; i < n; i++) {
        if (medal[reg[i].country] < 2) {
            cout << reg[i].country << " " << reg[i].id << endl;
            medal[reg[i].country]++;
            rank++;
        }
        
        if (rank == 3) break;
    }

    delete[] medal;
}

int main() {
    INIT();
    INPUT();
    return 0;
}
